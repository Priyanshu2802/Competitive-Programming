//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define endl "\n";
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
    ll m, i, a, b;
    cin >> m;
    map<pair<ll, ll>, ll> s;
    for (i = 0; i < m; i++)
    {
        cin >> a >> b;
        s[{a, b}] = 1;
        s[{b, a}] = 1;
    }
    for (i = 1; i <= 5; i++)
    {
        for (ll j = 1; j <= 5; j++)
        {
            for (ll k = 1; k <= 5; k++)
            {
                if ((i != j) && (i != k) && (k != j))
                {
                    auto x = make_pair(i, j), y = make_pair(i, k), z = make_pair(j, k);
                    if ((s[x] && s[y] && s[z]) || (!s[x] and !s[y] and !s[z]))
                    {
                        cout << "WIN" << endl;
                        return;
                    }
                }
            }
        }
    }
    cout << "FAIL" << endl;
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