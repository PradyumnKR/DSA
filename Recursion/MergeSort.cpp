#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr1, vector<int>&arr2,vector<int>& ans){
    int n= arr1.size();
    int m = arr2.size();
    int i =0;
    int j = 0 ;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n){
        ans.push_back(arr1[i]);
        i++;
    }
    while(j<m){
        ans.push_back(arr2[j]);
        j++;
    }
}
void Merge(vector<int>&arr, int low, int mid, int high){
    int n1 = mid-low+1;
    int n2 = high-mid;
    int left[n1];
    int right[n2];
    for(int i =0;i<n1;i++){
        left[i] = arr[low+i];
    }

    for(int i =0; i<n2; i++){
        right[i] = arr[mid+1+i];
    }

    int i =0;
    int j =0;
    int k = low;
    while(i<n1 and j<n2){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
            k++;
        }
        else{
            arr[k] = right[j];
            j++;
            k++;
        }
    }

    while(i<n1){
        arr[k] = left[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k] = right[j];
        k++;
        j++;
    }

}

void mergeSort(vector<int>&arr,int low,  int high){
    if(low>=high) return ;
    int mid = (low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr,mid+1, high);
    Merge(arr,low,mid,high);
}
// Time complexity : nlogn
int main()
{
 vector<int>arr={ 10,12,1,3,4,5,2,3,4,10};
 int n = arr.size();
 mergeSort(arr,0,n);
 for(auto i : arr){
    cout<< i <<" " ;
 }
 
 return 0;
}