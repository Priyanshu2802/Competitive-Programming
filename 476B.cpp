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
    ll i;
    string s;
    cin >> s;
    ll p = 0, m = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            p++;
        }
        else
            m++;
    }
    cin >> s;
    ll q = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            p--;
        }
        else if (s[i] == '-')
        {
            m--;
        }
        else if (s[i] == '?')
        {
            q++;
        }
    }
    if (p < 0 || m < 0)
    {
        ld a = 0;
        printf("%.9Lf\n", a);
    }
    else if(p==0 && m==0 && q==0)
    {
        ld a=1;
        printf("%.9Lf\n",a);
    }
    else 
    {
        ll d=p+m;

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
    //cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}