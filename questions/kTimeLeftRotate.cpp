#include<bits/stdc++.h>
using namespace std;
// 2 1 

void rotate(vector<int>&arr, int k ){
    int n = arr.size();
    k = k%n;
    k = n-k;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
}
int main()
{
    vector<int> arr = {};
 return 0;
}