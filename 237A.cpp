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
    ll n, i, a, b;
    cin >> n;
    map<pair<ll, ll>, ll> v;
    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        v[{a, b}]++;
    }
    ll mx = 0;
    for (auto &x : v)
    {
        mx = max(mx, x.second);
    }
    cout << mx << endl;
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