#include<bits/stdc++.h>
using namespace std;


int longestSubArrayWithKSum(vector<int>&arr,int d){
    int n = arr.size();
    int sum =0;
    int ans =0;
    unordered_map<int ,int>mp;
    for(int i =0;i<n;i++){
        sum+=arr[i];
        if(sum == d){
            int len =i+1;
            ans = max(ans,len);
        }
        if(mp.find(sum-d) != mp.end()){

            int len = i - mp[sum-d];
            ans = max(ans , len);
        }
        if(mp.find(sum)==mp.end()){ //sum ki value not sum-k in map
            mp[sum] =i;
        }

    }
    return ans;
}


int main()
{

    vector<int> arr = {1,6,12,8,-2,2};
    cout<<longestSubArrayWithKSum(arr,20)<<endl;
 
 return 0;
}
