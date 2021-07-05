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
    ll d, sum;
    cin >> d >> sum;
    ll arr[d][2];
    ll i, j, mn = 0, mx = 0;
    for (i = 0; i < d; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
        mn += arr[i][0];
        mx += arr[i][1];
    }
    if (sum < mn || sum > mx)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        ll brr[d];
        for (i = 0; i < d; i++)
        {
            brr[i] = arr[i][0];
            sum -= arr[i][0];
        }
        i = 0;
        while (sum)
        {
            ll ans = abs(arr[i][1] - arr[i][0]);
            ll c = min(ans, sum);
            brr[i] += c;
            i++;
            sum -= c;
        }
        for (i = 0; i < d; i++)
            cout << brr[i] << " ";
        cout << endl;
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