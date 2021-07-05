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
    ll n, i, e = 0, o = 0;
    cin >> n;
    vll even, odd;
    for (i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        if (a % 2 == 0)
        {
            e++;
            even.pb(a);
        }
        else
        {
            o++;
            odd.pb(a);
        }
    }
    if (e % 2 != o % 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        if (e % 2 == 0 && o % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            sort(odd.begin(), odd.end());
            sort(even.begin(), even.end());
            bool flag = 0;
            for (i = 0; i < odd.size(); i++)
            {
                for (ll j = 0; j < even.size(); j++)
                {
                    if (abs(even[j] - odd[i]) == 1)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag)
            {
                cout << "YES" << endl;
            }
            else
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