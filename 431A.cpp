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
#define ff first
#define ss second
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
bool isprime(ll x)
{
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
bool perfectSquare(long double x)
{
    long double sr = sqrt(x);
    return ((sr - floor(sr)) == 0);
}
/*___________________*workplace*_______________________*/
void solve()
{
    ll a1, a2, a3, a4, i;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    ll ans = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            ans += a1;
        }
        else if (s[i] == '2')
        {
            ans += a2;
        }
        else if (s[i] == '3')
        {
            ans += a3;
        }
        else if (s[i] == '4')
        {
            ans += a4;
        }
    }
    cout << ans << endl;
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