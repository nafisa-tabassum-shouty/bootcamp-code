#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int firstOccurrence(int a[],int n, int key)
{
    int left = 0, right = n-1, index = -1, mid;
    while(left<=right)
    {
        mid = (left+right)/2;
        if(a[mid]==key)
        {
            index = mid;
            right = mid-1;
        }
        else if(a[mid]>key)
        {
            right = mid-1;
        }
        else
        {
            left = mid+1;
        }
    }
    return index;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a[7]={3,5,7,8,10,11,23};
    int index = binarySearch(a,7,100);
    cout<<index<<endl;

}

