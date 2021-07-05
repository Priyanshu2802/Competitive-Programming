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
    ll n, i, a;
    cin >> n;
    vll v;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        v.pb(a);
    }
    sort(v.begin(), v.end());
    ll pos = 1;
    for (i = 0; i < n; ++i)
    {
        if (v[i] >= pos)
            ++pos;
    }

    cout << pos - 1 << endl;
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