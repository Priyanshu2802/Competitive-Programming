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
ll fact(ll y)
{
    while (y % 2 == 0)
    {
        y = y / 2;
    }
    if (y == 1)
        return 1;
    return 0;
}
/*___________________*workplace*_______________________*/
void solve()
{
    ll n, i;
    cin >> n;
    if (n == 1)
    {
        cout << "FastestFinger" << endl;
    }
    else if (n % 2 != 0 || n == 2)
    {
        cout << "Ashishgup" << endl;
    }
    else
    {
        if (isprime(n / 2) == 1)
        {
            cout << "FastestFinger" << endl;
        }
        else if (fact(n) == 1)
        {
            cout << "FastestFinger" << endl;
        }
        else
            cout << "Ashishgup" << endl;
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