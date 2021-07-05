#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n"
typedef vector<ll> vl;
#define pb push_back
const ll inf = INT_MAX;
int factorial(ll n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
/*___________________*workplace*_______________________*/
void solve()
{
    ll a, b, i;
    cin >> a >> b;
    ll s = a;
    ll x = a;
    ll ans = INT_MAX;
    for (i = 0; i < sqrt(s) + 1; i++)
    {
        if (b + i == 1)
            continue;
        x = a;
        int c = 0;
        while (x != 0)
        {
            c++;
            x = x / (b + i);
        }
        ll res = c + i;
        ans = min(ans, res);
    }
    cout << ans << endl;
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