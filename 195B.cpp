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
    ll n, m, i, j;
    cin >> n >> m;
    vll v;
    ll mid = (m + 1) / 2;
    v.pb(mid);
    i = 1;
    if (m % 2)
    {
        while (i <= mid)
        {
            if (mid - i >= 1)
            {
                v.pb(mid - i);
            }
            if (mid + 1 <= m)
            {
                v.pb(mid + i);
            }
            i++;
        }
    }
    else
    {
        while (i <= mid)
        {
            if (mid + 1 <= m)
            {
                v.pb(mid + i);
            }
            if (mid - i >= 1)
            {
                v.pb(mid - i);
            }
            i++;
        }
    }
    i = 0, j = 0;
    while (i < n)
    {
        cout << v[j] << endl;
        i++;
        j++;
        if (j == m)
        {
            j = 0;
        }
    }
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