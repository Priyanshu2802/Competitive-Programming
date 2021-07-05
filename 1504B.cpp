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
    ll n, i;
    cin >> n;
    string a, b;
    cin >> a;
    cin >> b;
    if (a == b)
    {
        cout << "YES" << endl;
    }
    else
    {
        ll o = 0, z = 0;
        bool pass = 1;
        for (i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                o++;
            }
            else
            {
                z++;
            }
        }
        for (i = n - 1; i >= 0; i--)
        {
            if (a[i] != b[i])
            {
                if (z != o)
                {
                    pass = 0;
                    break;
                }
                else
                {
                    while (a[i] != b[i] && i >= 0)
                    {
                        if (a[i] == '1')
                        {
                            o--;
                        }
                        else
                            z--;
                        i--;
                    }
                    if (a[i] == '1')
                    {
                        o--;
                    }
                    else if (a[i] == '0')
                    {
                        z--;
                    }
                }
            }
            else
            {
                if (a[i] == '1')
                {
                    o--;
                }
                else
                {
                    z--;
                }
            }
        }
        if (pass)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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