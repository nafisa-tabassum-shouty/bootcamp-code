#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

bool isPrime(int n)
{
    if(n<=1)return 0;
    int limit = sqrt(n)+1;
    for(int i = 2;i<limit;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    for(ll  i = 1;i<=10;i++)
    {
        cout<<i<<" = "<<isPrime(i)<<endl;
    }
    return 0;
}
