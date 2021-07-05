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
    ll i, j, a[3][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    ll b[3][3] = {1, 1, 1, 1, 1, 1, 1, 1, 1};

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            if (a[i][j] % 2 != 0)
            {
                b[i][j] = (b[i][j] == 0) ? 1 : 0;
                if (j + 1 >= 0 && j + 1 < 3)
                    b[i][j + 1] = (b[i][j + 1] == 0) ? 1 : 0;
                if (j - 1 >= 0 && j - 1 < 3)
                    b[i][j - 1] = (b[i][j - 1] == 0) ? 1 : 0;
                if (i - 1 >= 0 && i - 1 < 3)
                    b[i - 1][j] = (b[i - 1][j] == 0) ? 1 : 0;
                if (i + 1 >= 0 && i + 1 < 3)
                    b[i + 1][j] = (b[i + 1][j] == 0) ? 1 : 0;
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << b[i][j];
        }
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