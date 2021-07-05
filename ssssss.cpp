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
/*___________________*workplace*_______________________*/
void solve()
{
    ll n, i, k, count = 0;
    cin >> n >> k;
    ll arr[n];
    vector<ll>v;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count = 0;
            while (arr[i] == 0)
            {
                count++;
                i++;
            }
            v.pb(count);
        }
    }
    ll ans = 0;
    for (i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 1 && v[i] != 1)
        {
            ans += v[i] / 2;
        }
        else if (v[i] % 2 == 0 && v[i] != 2)
        {
            ll d = v[i] / 2;
            d--;
            ans += d;
        }
    }
    if (ans >= k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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