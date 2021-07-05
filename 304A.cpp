//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, i;
    cin >> n;
    ll count=0;
    for(i=1;i<n;i++)
    {
        for(ll j=1;j<i;j++)
        {
            ll t=i*i+j*j;
            ll c=sqrt(t);
            if(c*c!=t)
            continue;
            if(c>n)
            continue;
            if(i+j<=c||i+c<=j||c+j<=i) continue;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}