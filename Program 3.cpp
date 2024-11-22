#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int lowerBound(int a[],int n, int key)
{
    int left = 0, right = n-1, mid, ans;
    while(left<=right)
    {
        mid = (left+right)/2;
        if(a[mid]>=key)
        {
            ans = mid;
            right = mid-1;
        }
        else if(a[mid]<key)
        {
            left = mid+1;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a[9]={2,3,3,3,6,6,6,8,8};
    int index = lowerBound(a,9,6);
    cout<<index<<endl;

}

