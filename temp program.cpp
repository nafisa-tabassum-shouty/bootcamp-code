#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

bool isPrime(int n)
{
    if(n<=1)return 0;
    for(int i = 2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
const ll sz = 100000001;
bool mark[sz];

void sieve(int n)
{
    mark[1]
}

int main()
{
    for(ll i = 1; i<=10; i++)
    {
        cout<<i<<" = "<<isPrime(i)<<endl;
    }
}
