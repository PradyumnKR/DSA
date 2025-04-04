#include<bits/stdc++.h>
using namespace std;
int sum_n_Natural(int n){
    if(n==0) return 0;
    return n+sum_n_Natural(n-1);

}
int factorial(int n){
    if(n==1) return 1; 
    return n*factorial(n-1);
}

int sum_digit(int n){
    if(n==0) return 0;
    return (n%10)+sum_digit(n/10);
}

int palindrome(int n){
    int rev =0;
    int temp = n ;
    while(n>0){
        int rem = n%10;
        rev = rem + rev*10;
        n = n/10;
    }
    if(rev == temp){
        return 1;
    }else{
        return 0;
    }
}

int palindrome_recursive(int n){
    if(n<0) return 0;
    int rev= (n%10) + 10*palindrome_recursive(n/10); //do it yourself
    
}

bool isPalindromeStringLoop(string str){
    int n = str.size();
    int i=0;
    int j = n-1;
    while(i<=j){
        if(str[i] != str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool isPalindromeStringRecursive(string str,int i, int j){
    if(i>j) return true; 
     return ( (str[i] ==str[j]) && isPalindromeStringRecursive(str,i+1,j-1) )  ;//do it yourself
}

int FibonacciSeries(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return FibonacciSeries(n-1) +FibonacciSeries(n-2);
}
int TribonacciSeries(int  n){
    if(n==0) return 0;
    if(n==1) return 0;
    if(n==2) return 1; 
    return TribonacciSeries(n-1)+TribonacciSeries(n-2)+TribonacciSeries(n-3);
}

void genALLSubSequence(string &str,int i,int n,string &temp){
    if(i==n){
        cout<<temp<<" ";
        return;
    }
    genALLSubSequence(str,i+1,n,temp);
    temp.push_back(str[i]);
    genALLSubSequence(str,i+1,n,temp);
    temp.pop_back();
}

bool subSetSum(vector<int>&arr, int i , int sum, int target, int n){
    if(sum == target) return true;
    if(i==n) return true;
    bool notpick = subSetSum(arr,i+1,sum,target,n);
    bool pick = subSetSum(arr,i+1,sum+arr[i],target,n);
    return (notpick or pick);
}
int main()
{
    // int sum = sum_n_Natural(5);
    //cout << FibonacciSeries(1) << endl; // This will print the 5th Fibonacci number
    // cout<<sum<<endl;
    // int fact = factorial(5);
    // cout<<fact<<endl;
    // int sum_dig = sum_digit(124);
    // cout<<sum_dig<<endl;
    // cout<<palindrome(131)<<endl;
    // cout<<isPalindromeStringRecursive("abccba",0,5);
    //cout<<FibonacciSeries(5)<<endl;
    // string str="abc"; // Corrected type to string
    // string temp = ""; // Corrected type to string
    // genALLSubSequence(str,0,3,temp);
    vector<int> nums= {1,2,3,4,5};
    int target = 12;
    int sum =0;
    bool a = subSetSum(nums,0,sum,target,5);
    if(a) cout<<"True";

 return 0;
}