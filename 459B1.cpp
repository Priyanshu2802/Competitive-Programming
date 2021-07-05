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
int fact(ll n)
{
    return (n == 1 || n == 0) ? 1 : n * fact(n - 1);
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
    ll n, i;
    cin >> n;
    ll arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    if (arr[0] == arr[n - 1])
    {
        cout << "0 " << sm(n - 1) << endl;
    }
    else
    {
        ll max = 0, l = 0, m = 0;
        max = arr[n - 1] - arr[0];
        for (i = 0; i < n; i++)
        {
            if (arr[i] == arr[0])
                l++;
            if (arr[i] == arr[n - 1])
                m++;
        }
        cout << max << " " << l * m << endl;
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
    while (test_case--)
    {
        solve();
    }
    return 0;
}