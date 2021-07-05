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
    ll arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    ll start = 1, end = 1;
    bool yes = 0;
    ll mx = 0;
    for (i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1] && yes == 0)
        {
            yes = 1;
            start = i;
            ll max = arr[i - 1];
            if ((i - 2) < 0)
            {
                mx = arr[0];
            }
            else
                mx = arr[i - 2];
            while (arr[i] < max && i < n)
            {
                i++;
            }
            end = i;
        }
        else if (arr[i] < arr[i - 1] && yes == 1)
        {
            cout << "no" << endl;
            return;
        }
    }
    vll v;
    for (i = start - 1; i < end; i++)
    {
        v.pb(arr[i]);
    }
    reverse(v.begin(), v.end());
    ll mn = *min_element(v.begin(), v.end());
    /*cout << start - 1 << " " << end - 1 << endl;
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << mx << endl;
    cout << mn << endl;*/
    if (mn < mx && start != 1)
    {
        cout << "no" << endl;
        return;
    }
    for (i = 1; i < v.size(); i++)
    {
        if (v[i - 1] > v[i])
        {
            cout << "no" << endl;
            return;
        }
    }
    cout << "yes" << endl;
    cout << start << " " << end << endl;
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