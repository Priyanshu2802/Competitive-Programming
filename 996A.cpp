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
    //error in tescase 29 !!!!!!!!!!
    ll sum, i, j;
    cin >> sum;
    if (sum % 100 == 0)
    {
        cout << sum / 100 << endl;
        return;
    }
    ll arr[] = {1, 5, 10, 20, 100};
    ll n = 5;
    ll t[n + 1][sum + 1];
    for (i = 0; i < n + 1; i++)
    {
        for (j = 0; j < sum + 1; j++)
        {
            if (j == 0)
                t[i][j] = 0;
            if (i == 0)
                t[i][j] = inf - 1;
        }
    }
    for (i = 1, j = 1; j < sum + 1; j++)
    {
        if (j % arr[0] == 0)
            t[i][j] = j / arr[0];
        else
            t[i][j] = inf - 1;
    }
    for (i = 2; i < n + 1; i++)
    {
        for (j = 1; j < sum + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                t[i][j] = min(t[i][j - arr[i - 1]] + 1, t[i - 1][j]);
            }
            else
                t[i][j] = t[i - 1][j];
        }
    }
    cout << t[n][sum] << endl;
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