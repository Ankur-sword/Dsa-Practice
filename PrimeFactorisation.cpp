
// lovecode_ap07

#include<bits/stdc++.h>

using namespace std;
int num[100],expo[100],i=0;
void primefactor(int n)
{
    if(n==1)
    {
        i++;
        num[i]=2;
        expo[i]=0;
        return;
    }
    int d=2;
    
    while(n>1 and d*d<=n){

        int k=0;
        
            while(n%d==0)
            {
                n=n/d;
                k++;
            }
             if(k>0){ 
                 i++;
            num[i]=d;
            expo[i]=k;
          }
        
       
        d++;
    }
    if(n>1)
    {
        i++;
        num[i]=n;
        expo[i]=1;
    }
}

int main()
{
    int n;
    cin>>n;
    primefactor(n);
    for(int j=1;j<=i;j++)
    cout<<num[j]<<" "<<expo[j]<<endl;
    return 0;
}
