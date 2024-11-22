#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll mark[105];
vector<ll> v;

void sieve(int n)
{
    int limit = sqrt(n)+1;
    mark[1]=mark[0]=1;
    for(ll i = 4; i<=n; i+=2)
    {
        mark[i]=1;
    }
    v.push_back(2);
    for(ll i = 3; i<=n; i+=2)
    {
        if(!mark[i])
        {
            v.push_back(i);
            if(i<=limit)
                for(ll j = i*i; j<=n; j+=2*i)
                {
                    mark[j]=1;
                }
        }
    }
}
vector<ll> divisor(ll n)
{
    vector<ll> v;
    int limit = sqrt(n)+1;
    for(ll i = 1;i<limit;i++)
    {
        if(i*i==n)
        {
            v.push_back(i);
        }
        else if(n%i==0)
        {
            v.push_back(i);
            v.push_back(n/i);
        }
    }
    return v;
}

vector<ll> divisors[105];

void allDivisor(ll n)
{
    for(ll i = 1;i<=n;i++)
    {
        for(ll j = i;j<=n;j+=i)
        {
            divisors[j].push_back(i);
        }
    }
}

int main()
{
    allDivisor(100);
    for(ll i = 1;i<=100;i++)
    {
        cout<<i<<" = ";
        for(auto it : divisors[i])
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }

    vector<ll> v = divisor(16);
    for(auto it : v)
    {

        cout<<it<<endl;
    }
    cout<<endl;
    sieve(100);


    for(auto &it : v)
    {
        cout<<it<<" ";
        it=3;
        cout<<it<<" ";
        cout<<endl;
    }
    for(auto it: v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
for(ll i = 1;i<v.size();i+=100);
