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
    string a, b;
    cin >> a;
    cin >> b;
    ll count = 0, i;
    ml m;
    for (i = 0; i < b.size(); i++)
    {
        m[b[i] - 'a'] = 0;
    }
    for (i = 0; i < a.size(); i++)
        m[a[i] - 'a'] = 1;
    bool flag = 1;
    for (auto &x : m)
    {
        if (x.second == 0)
        {
            flag = 0;
            break;
        }
    }
    if (!flag)
    {
        cout << "-1" << endl;
        return;
    }
    ll arr[26] = {0}, brr[26] = {0};

    for (i = 0; i < a.size(); i++)
    {
        arr[a[i] - 'a']++;
    }
    for (i = 0; i < b.size(); i++)
        brr[b[i] - 'a']++;
    for (i = 0; i < 26; i++)
    {
        count += (min(arr[i], brr[i]));
    }
    cout << count << endl;
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