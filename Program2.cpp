#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

const ll sz = 100005;
ll a[sz];
int n,c;

bool fun(ll minimumDistance)
{
    int temp2 = 1;
    int temp = a[1];
    for(ll i = 2; i<=n; i++)
    {
        if(a[i]-temp>=minimumDistance)
        {
            temp2++;
            temp = a[i];
        }
    }
    if(temp2>=c)
    {
        return true;
    }
    return false;
}

ll binarySearch()
{
    ll left = 0,right = a[n],mid,ans;
    while(left<=right)
    {
        mid = (left+right)/2;
        if(fun(mid))
        {
            ans = mid;
            left = mid+1;
        }
        else
        {
            right = mid-1;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {

        cin>>n>>c;
        for(ll i = 1; i<=n; i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        ll ans = binarySearch();
        cout<<ans<<endl;
    }
}
