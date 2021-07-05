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
    ll n, m;
    cin >> n >> m;
    map<ll, set<ll>> v;
    ll a, b, i;
    for (i = 0; i < m; i++)
    {
        cin >> a >> b;
        v[a].insert(b);
        v[b].insert(a);
    }
    ll ans = 0;
    bool flag = 1;
    while (flag)
    {
        flag = 0;
        set<pair<ll, ll>> free;
        for (auto &x : v)
        {
            if (x.second.size() == 1)
            {
                free.insert(make_pair(x.first, *x.second.begin()));
            }
        }
        if (free.size() > 0)
        {
            ans++;
            for (auto &x : free)
            {
                v[x.first].erase(x.second);
                v[x.second].erase(x.first);
            }
            flag = 1;
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