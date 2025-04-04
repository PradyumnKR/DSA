#include<bits/stdc++.h>
using namespace std;

void print_N(int n){
    if ( n <0) return;
    cout<<n<<endl;
    print_N(n-1);
}
int main()
{
    print_N(3);
 return 0;
}