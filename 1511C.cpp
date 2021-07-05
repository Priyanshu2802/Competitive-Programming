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
    ll n, q, i, a, j;
    cin >> n >> q;
    ll arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ml m;
    for (i = n - 1; i >= 0; i--)
    {
        m[arr[i]] = i + 1;
    }
    while (q--)
    {
        ll a;
        cin >> a;
        ll c = m[a];
        cout << m[a] << " ";
        for (auto &x : m)
        {
            //cout<<x.first<<"  *  "<<x.second<<endl;
            if (x.second < c)
                x.second += 1;
            //cout<<x.first<<" ** "<<x.second<<endl;
        }
        m[a] = 1;
    }
    cout << endl;
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