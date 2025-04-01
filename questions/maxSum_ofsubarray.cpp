#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//  vector<int> arr = {1,2,-7,7,8};
//  int n = arr.size();
//  int sum = INT_MIN;
//  for(int i = 0; i<n;i++){
//     for(int j = i;j<n;j++){
//         int temp = 0;
//         for(int k = i;k<=j;k++){
//             temp += arr[k];
//         }
//         if(temp>sum){
//             sum = temp;
//         }
//     }
//  }
//  cout<<sum;
//  return 0;
// }


//More optimal, O(n^2)
int main()
{
 vector<int> arr = {1,2,-7,7,8};
 int n = arr.size();
 int ans = INT_MIN;
 for(int i = 0; i<n;i++){
    int sum =0;
    for(int j = i;j<n;j++){
        sum = sum+arr[j];
        ans = max(ans,sum);
    }
 }
 cout<<ans;
 return 0;
}

//Cadean's algorithm - O(n)

