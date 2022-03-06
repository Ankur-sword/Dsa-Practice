#include<bits/stdc++.h>

using namespace std;

bool prime(int n)
{
    if(n%2==0) return false;
    if(n==1)
    return false;
   
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
        return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    prime(n)?cout<<"true":cout<<"false";
    cout<<endl;
    return 0;
}
