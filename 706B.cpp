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
ll knap(ll shop[], ll money[], ll n, ll m)
{
    if (n == 0 || m == 0)
    {
        return 0;
    }
    if (shop[n - 1] <= money[m - 1])
    {
        return 1 + knap(shop, money, n - 1, m);
    }
    else
        return knap(shop, money, n - 1, m);
}
/*___________________*workplace*_______________________*/
void solve()
{
    ll n, m, i, j;
    cin >> n;
    ll shop[n];
    for (i = 0; i < n; i++)
        cin >> shop[i];
    cin >> m;
    ll money[m];
    for (i = 0; i < m; i++)
        cin >> money[i];
    // ll t[n + 1][m + 1];
    // for (i = 0; i < n + 1; i++)
    // {
    //     for (j = 0; j < m + 1; j++)
    //     {
    //         if (i == 0 || j == 0)
    //             t[i][j] = 0;
    //     }
    // }
    // for (i = 1; i < n + 1; i++)
    // {
    //     for (j = 1; j < m + 1; j++)
    //     {
    //         if (shop[i - 1] <= money[j - 1])
    //         {
    //             t[i][j] = 1 + t[i - 1][j];
    //         }
    //         else
    //             t[i][j] = t[i - 1][j];
    //     }
    // }
    i = n;
    for (j = 1; j < m + 1; j++)
    {
        cout << knap(shop, money, i, j) << endl;
    }
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
    //cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}