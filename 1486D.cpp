//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vll;
#define pb push_back
const ll inf = INT_MAX;
int factorial(ll n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
/*___________________*workplace*_______________________*/
void solve()
{
    ll n, i, k;
    cin >> n >> k;
    ll arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(i=k;i<n-k;i++)
    {
        for(i=0;i<n;i++)
        {
            for(ll j=i;j<)
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test_case=1;
    while (test_case--)
    {
        solve();
    }
    return 0;
}