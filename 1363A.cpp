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
    ll n, x, a;
    ll even = 0, odd = 0, i;
    cin >> n >> x;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 2 == 1)
            odd++;
        else
            even++;
    }
    ll m = min(even, x - 1);
    ll d = x - m;
    if (d % 2 == 0)
    {
        d++;
    }
    if (odd >= d && d <= x)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
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