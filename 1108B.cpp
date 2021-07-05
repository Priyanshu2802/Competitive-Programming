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
    ll n, i;
    cin >> n;
    ml m;
    ll c;
    vll a, b;
    ll arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }
    sort(arr, arr + n);
    ll mx = 0;
    if (m[arr[n - 1]] == 1)
    {
        mx = arr[n - 1];
    }
    else if (m[arr[n - 1]] == 2)
    {
        cout << arr[n - 1] << " " << arr[n - 1] << endl;
        return;
    }
    for (auto &x : m)
    {
        if (x.second == 2)
        {
            a.pb(x.first);
            b.pb(x.first);
        }
        else if (x.second == 1)
        {
            if (mx % x.first == 0)
            {
                a.pb(x.first);
            }
            else
                b.pb(x.first);
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll s = a.size();
    ll t = b.size();
    if (b.size() == 0)
    {

        cout << a[s - 2] << " " << a[s - 1] << endl;
    }
    else
    {
        cout << a[s - 1] << " " << b[t - 1] << endl;
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