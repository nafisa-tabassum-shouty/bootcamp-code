#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long


double findRoot(double n)
{
    double left = 0, right = n, mid;
    while (left <= right)
    {
        mid = (left + right) / 2.0;
        cout<<fixed<<setprecision(7)<<mid<<endl;
        if(mid*mid<=n)
        {
            left = mid+0.000000001; // ekhane check korbo +1 dile ki hoi
        }
        else
        {
            right = mid-0.000000001;
        }

        /*if (a[mid] == key)
        {
            index = mid;
            break;
        }
        else if (a[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;*/
    }
    return right;
}

int main()
{
    cout<<fixed<<setprecision(7)<<findRoot(2)<<endl;
}
