#include<bits/stdc++.h>
using namespace std;

bool findSumK(vector<int>&arr, int d){
    int n = arr.size();
    int sum =0 ; 
    unordered_set<int> s; 
    for(int i =0 ;i<n;i++){
        sum = sum + arr[i];
        if(sum == d){
            return true;
        }
        if(s.find(sum-d)!=s.end()){
            return true;
        }
        s.insert(sum);
    }
    false; 
}
int main()
{
    vector<int>arr = {1,3,5,6,7};
    int d = 8;
    cout<<findSumK(arr,d)<<endl;
 return 0;
}