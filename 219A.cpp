//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vll;
#define pb push_back
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
ll isprime(ll x)
{
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
/*___________________*workplace*_______________________*/
void solve()
{
    ll k, i;
    cin >> k;
    map<char, ll> m;
    string s;
    cin >> s;
    for (i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }
    bool flag = 1;
    for (auto c : m)
    {
        if (c.second % k != 0)
        {
            flag = 0;
            break;
        }
    }
    if (!flag)
    {
        cout << "-1" << endl;
    }
    else
    {
        vector<char>v;
        for (auto x : m)
        {
            ll t = x.second / k;
            while (t--)
            {
                v.pb(x.first);
            }
        }
        while (k--)
        {
            for (i = 0; i < v.size(); i++)
                cout << v[i];
        }
        cout << endl;
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
    while (test_case--)
    {
        solve();
    }
    return 0;
}