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
    string s;
    cin >> s;
    ll i;
    bool flag = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] != 'a')
        {
            flag = 1;
            break;
        }
    }
    if (!flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        ll t = s.size();
        ll count = 1;
        t -= 1;
        cout << "YES" << endl;
        for (i = 0; i < s.size(); i++)
        {
            if (s[t - i] != 'a' && count == 1)
            {
                cout << "a";
                count--;
            }
                cout << s[i];
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
    ll test_case;
    cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}