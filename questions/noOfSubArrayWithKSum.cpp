#include<bits/stdc++.h>
using namespace std;

int noOfSubArrayWithZeroSum(vector<int>&arr,int d){
    int n = arr.size();
    int sum =0;
    int ans =0;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum ==d){
            ans++;
        }
        ans = ans + mp[sum-d];
        mp[sum]++;
        
    }
    return ans;
}
int main()
{
    vector<int> arr={10,2,-2,4,-4,-1,1};
    cout<<noOfSubArrayWithZeroSum(arr,3)<<endl;
 
 return 0;
}