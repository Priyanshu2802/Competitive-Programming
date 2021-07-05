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
    ll e = 0, i;
    string s;
    cin >> s;
    vector<char> v;
    for (i = s.size() - 1; i >= 0; i--)
    {
        if ((s[i] - '0') % 2 == 0)
            e++;
        v.pb(s[i]);
    }
    if (!e)
    {
        cout << "-1" << endl;
    }
    else
    {
        bool flag = 0;
        ll change = 0;
        ll t = v.size();
        for (i = t - 1; i >= 0; i--)
        {
            if ((v[i] - '0') % 2 == 0)
            {
                if ((v[i] - '0') < (v[0] - '0'))
                {
                    swap(v[i], v[0]);
                    flag = 1;
                    break;
                }
                else
                {
                    change = i;
                }
            }
        }
        if (!flag)
        {
            swap(v[0], v[change]);
        }
        reverse(v.begin(), v.end());
        for (i = 0; i < v.size(); i++)
            cout << v[i];
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