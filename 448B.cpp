//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define endl "\n";
#define make_pair mp;
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
static ll t[101][101];
ll lcs(string x, string y, ll n, ll m)
{
    if (n == 0 || m == 0)
    {
        return 0;
    }
    if (t[n][m] != -1)
    {
        return t[n][m];
    }
    if (x[n - 1] == y[m - 1])
    {
        return t[n][m] = 1 + lcs(x, y, n - 1, m - 1);
    }
    else
        return t[n][m] = max(lcs(x, y, n - 1, m), lcs(x, y, n, m - 1));
}
/*___________________*workplace*_______________________*/
void solve()
{
    string a, b;
    ll n, m;
    cin >> a >> b;
    n = a.size(), m = b.size();
    if (lcs(a, b, n, m) == m)
    {
        cout << "automaton" << endl;
        return;
    }
    string x = a, y = b;
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    if (x == y)
    {
        cout << "array" << endl;
        return;
    }
    memset(t, -1, sizeof(t));
    if (lcs(x, y, n, m) == m)
    {
        cout << "both" << endl;
        return;
    }
    cout << "need tree" << endl;
}
int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    memset(t, -1, sizeof(t));
    ll test_case = 1;
    //cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}