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
    ll n, i;
    cin >> n;
    map<ll, vll> m;
    vp ans;
    ll a;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        m[a].pb(i + 1);
    }
    for (auto &x : m)
    {
        if (x.second.size() == 1)
        {
            ans.pb({x.first, (ll)0});
        }
        else
        {
            ll d = x.second[1] - x.second[0];
            bool flag = 1;
            for (i = 1; i < x.second.size(); i++)
            {
                if (x.second[i] != x.second[i - 1] + d)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                ans.pb({x.first, d});
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (i = 0; i < ans.size(); i++)
        cout << ans[i].first << " " << ans[i].second << endl;
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