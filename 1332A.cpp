//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vll;
#define pb push_back
const ll inf = INT_MAX;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
int factorial(ll n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
ll sm(ll n)
{
    ll ans = 0;
    for (ll i = 0; i <= n; i++)
        ans += i;
    return ans;
}
/*___________________*workplace*_______________________*/
void solve()
{
    ll a, b, c, d, i;
    cin >> a >> b >> c >> d;
    ll x, x1, x2, y, y1, y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    ll u = abs(y1 - y2);
    ll s = abs(x1 - x2);
    if (abs(a - b) <= s && abs(c - d) <= u)
    {
        if ((max(a, b) > 0 && s == 0) || (max(c, d) > 0 && u == 0))
        {
            cout << "NO" << endl;
        }
        else if ((a == 0 && b > 0 && (x - x1) == 0) || (b == 0 && a > 0 && (x2 - x) == 0) || (c == 0 && d > 0 && (y2 - y) == 0) || (d == 0 && c > 0 && (y - y1) == 0))
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
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