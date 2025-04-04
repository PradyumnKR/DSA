#include<bits/stdc++.h>
using namespace std;


int longestSubArrayWithZero(vector<int>&arr){
    int n = arr.size();
    int sum =0;
    int ans =0;
    unordered_map<int ,int>mp;
    for(int i =0;i<n;i++){
        sum+=arr[i];
        if(sum == 0){
            int len =i+1;
            ans = max(ans,len);
        }
        if(mp.find(sum) != mp.end()){

            int len = i - mp[sum];
            ans = max(ans , len);
        }
        else{
            mp[sum] =i;
        }

    }
    return ans;
}


int main()
{

    vector<int> arr = {2,4,-4,2,-4,3,2,-3};
    cout<<longestSubArrayWithZero(arr)<<endl;
 
 return 0;
}
