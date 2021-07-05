//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vll;
typedef vector<pair<ll, ll>> vp;
typedef map<ll, ll> ml;
typedef unordered_map<ll, ll> uml;
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
ll isprime(ll x)
{
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
/*___________________*workplace*_______________________*/
void solve()
{
    ll n, i, a;
    cin >> n;
    map<ll, ll> m;
    ll arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }
    vp vpp;
    for (auto x : m)
    {
        vpp.pb({x.second, x.first});
    }
    sort(vpp.begin(), vpp.end());
    vll v;
    ll s = vpp.size();
    for (i = s - 1; i >= 0; i--)
    {
        for (ll j = 0; j < vpp[i].first; j++)
        {
            v.pb(vpp[i].second);
        }
    }
    ll mn = inf, mx = 0, count = 0;
    for (i = 0; i < v.size(); i++)
    {
        if (v[i] < mn)
        {
            mn = v[i];
        }
        if (v[i] > mx)
        {
            mx = v[i];
        }
        ll d = mx - mn;
        count += d;
    }
    sort(arr, arr + n);
    mn = inf, mx = 0;
    ll ans = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
        }
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
        ll d = mx - mn;
        ans += d;
    }
    ll f = min(count, ans);
    cout << f << endl;
}
int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test_case = 1;
    while (test_case--)
    {
        solve();
    }
    return 0;
}