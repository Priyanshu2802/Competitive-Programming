//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vc;
const ll inf = INT_MAX;
void solve()
{
    ll n, i,m=0,count=0,z=0;
    cin >> n;
    ll arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
            m++;
        if(arr[i]==0)
        z++;
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<-1)
        {
            count+=(abs(arr[i])-1);
        }
        if(arr[i]==0)
        {
            count++;
        }
        if(arr[i]>1)
        {
            count+=(arr[i]-1);
        }
    }
    if(m%2==1 && z==0)
    {
        count+=2;
    }
    cout<<count<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test_case = 1;
    while (test_case--)
    {
        solve();
    }
    return 0;
}