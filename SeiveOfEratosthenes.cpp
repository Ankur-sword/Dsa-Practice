// Lovecode_ap07


#include<bits/stdc++.h>
using namespace std;
const int Nmax=100001;

bool isPrime[Nmax];

void seiveOfEratosthenes(int n)
{
    for(int i=2; i<=n; i++)
    isPrime[i] =true;       // Make All array as true

    for(int i=2;i<=n/2;i++) // i value can go upto n/2 becaue after that no multiples of i can come in our range
    {
        if(isPrime[i])     //check if its value is true or not 
        {
            for(int j=i*2;j<=n;j+=i)  // mark all the multiples of prime number as false 
            {
                isPrime[j]=false;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    
    seiveOfEratosthenes(n);
    for(int i=2;i<=n;i++)
    if(isPrime[i]==true)
    cout<<i<<" ";

    return 0;
}
