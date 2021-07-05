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
    string s;
    cin >> s;
    ll t = 0, i;
    ll n = s.size();
    if (n % 2 == 1)
    {
        t = n + 1;
    }
    else
    {
        string comp = "";
        for (i = 0; i < n / 2; i++)
            comp += '7';
        for (i = 0; i < n; i++)
            comp += '4';
        if (comp < s)
        {
            t = n + 2;
        }
        else
            t = n;
    }
    string comp = "";
    for (i = 0; i < t / 2; i++)
        comp += '4';
    for (i = 0; i < t / 2; i++)
        comp += '7';
    do
    {
        if (comp >= s || comp.length() > n)
        {
            cout << comp;
            return;
        }
    } while (next_permutation(comp.begin(), comp.end()));
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test_case = 1;
    while (test_case--)
    {
        solve();
    }
    return 0;
}