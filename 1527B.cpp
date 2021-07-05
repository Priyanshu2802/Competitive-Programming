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
bool palindrome(string s)
{
    ll a = s.length();
    for (ll i = 0; i <= a / 2; i++)
    {
        if (s[i] != s[a - 1 - i])
        {
            return true;
        }
    }
    return false;
}
/*___________________*workplace*_______________________*/
void solve()
{
    ll n, i;
    cin >> n;
    string s;
    cin >> s;
    ll o = 0;
    for (i = 0; i < n; i++)
    {
        if (s[i] == '0')
            o++;
    }
    if (o % 2 == 0 || o == 1)
    {
        cout << "BOB" << endl;
    }
    else
        cout << "ALICE" << endl;
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