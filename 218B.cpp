#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll m,n,i;
    cin>>n>>m;
    ll arr[m],brr[m]={0};
    for(i=0;i<m;i++)
    {
    cin>>arr[i];
    brr[i]=arr[i];
    }
    ll max=0,min=0,count=0;
    for(i=0;i<n;i++)
    {
        sort(arr,arr+m);
        max+=arr[m-1];
        arr[m-1]--;
    }
    for(i=0;i<n;i++)
    {
        sort(brr,brr+m);
        for(ll j=0;j<m;j++)
        {
            if(brr[j]>0)
            {
                min+=brr[j];
                brr[j]--;
                break;
            }
        }
    }
    cout<<max<<" "<<min<<endl;
    return 0;
}