#include<bits/stdc++.h>
using namespace std;


int fibo(int a,int b,int n)
{
    if(n==0)
    return a;
    if(n==1)
    return b;
    if(n==2)
    return a^b;
    return fibo(a,b,n%3);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
   { int a,b,n;
    cin>>a>>b>>n;
    cout<<fibo(a,b,n)<<endl;}
    
    
    return 0;
}
