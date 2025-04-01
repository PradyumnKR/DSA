#include<bits/stdc++.h>
using namespace std;

// bool bruteforce(vector<int>& nums);

int main()
{
    //works for sorted array
 vector<int> nums = {2,7,8,9};
 int n = nums.size();
 int i = 0;
 int j =n-1;
 bool ans = false;
 int tar = 9;
 while(i<j){
    int target = nums[i] +nums[j];
    if(target ==  tar ){
        ans = true;
    }
    else if(target>tar){
        j--;
    }
    else{
        i++;
    }
 }
 if(ans){
    cout<<"Target Pair Found."<<endl;
    cout<<"i:"<<i<<" j:"<<j<<endl;
 }
 else{
    cout<<"Target Not found.";
 }
 return 0;
}