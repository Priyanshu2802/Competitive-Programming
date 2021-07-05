#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vc;
#define pb push_back
const ll inf = INT_MAX;
int factorial(ll n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
/*___________________*workplace*_______________________*/
void solve()
{
    vector<pair<ll, ll>> v;
    ll a, b, c, d;
    cin >> a >> b;
    v.pb({a, b});
    cin >> c >> d;
    v.pb({c, d});
    bool flag = 0;
    if (v[0].first == v[1].first)
    {
        if ((v[0].second + v[1].second) == v[0].first)
            flag = 1;
    }
    if (v[0].first == v[1].second)
    {
        if ((v[0].second + v[1].first) == v[0].first)
            flag = 1;
    }
    if (v[0].second == v[1].first)
    {
        if ((v[0].first + v[1].second) == v[0].second)
            flag = 1;
    }
    if (v[0].second == v[1].second)
    {
        if ((v[0].first + v[1].first) == v[0].second)
            flag = 1;
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test_case;
    cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}