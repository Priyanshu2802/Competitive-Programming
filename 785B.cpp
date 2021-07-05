//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vll;
typedef vector<pair<ll, ll>> vp;
typedef map<ll, ll> ml;
typedef unordered_map<ll, ll> uml;
#define pb push_back
#define ff first
#define ss second
const ll inf = INT_MAX;
const ll mod = 1000000007;
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
    ll ans = n * (n + 1) / 2;
    return ans;
}
bool isprime(ll x)
{
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
bool perfectSquare(ld x)
{
    ld sr = sqrt(x);
    return ((sr - floor(sr)) == 0);
}

/*___________________*workplace*_______________________*/
void solve()
{
    ll n, i;
    cin >> n;
    vp v;
    for (i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v.pb({a, b});
    }
    ll m;
    cin >> m;
    vp s;
    for (i = 0; i < m; i++)
    {
        ll a, b;
        cin >> a >> b;
        s.pb({a, b});
    }
    sort(v.begin(), v.end());
    sort(s.begin(), s.end());
    ll x = 0, y = inf, u = 0, w = inf;
    for (i = 0; i < n; i++)
    {
        if (v[i].first > x)
        {
            x = v[i].first;
        }
        if (v[i].second < y)
        {
            y = v[i].second;
        }
    }
    for (i = 0; i < m; i++)
    {
        if (s[i].first > u)
        {
            u = s[i].first;
        }
        if (s[i].second < w)
        {
            w = s[i].second;
        }
    }
    ll d1 = u - y;
    ll d2 = x - w;
    ll d = max(d1, d2);
    if (d < 0)
    {
        cout << "0" << endl;
    }
    else
        cout << d << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test_case = 1;
    //cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}