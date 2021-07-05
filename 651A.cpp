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
ll connect(ll a, ll b)
{
    if (a <= 0 || b <= 0)
    {
        return 0;
    }
    if (a > b)
    {
        return 1 + connect(a - 2, b + 1);
    }
    else
        return 1 + connect(a + 1, b - 2);
}
/*___________________*workplace*_______________________*/
void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a < 2 && b < 2)
    {
        cout << "0" << endl;
        return;
    }
    cout << 1 + max(connect(a - 2, b + 1), connect(a + 1, b - 2)) << endl;
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