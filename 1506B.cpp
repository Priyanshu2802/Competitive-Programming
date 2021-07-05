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
    ll n, k, i;
    cin >> n >> k;
    char s[n + 1];
    cin >> s;
    ll count = 0, star = 0;
    for (i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            star++;
            s[i] = 'x';
        }
    }
    ll l = 0, ans = star, c = 0;
    i = 0;
    while (i < n)
    {
        if (s[i] == 'x')
        {
            count = 0;
            i++;
            l = i;
            c = 0;
            while ((count < k) && (i < n))
            {
                count++;
                if (s[i] == 'x')
                {
                    l = i;
                    c++;
                }
                i++;
            }
            if (c > 0)
            {
                ans -= abs(c - 1);
            }
            i = l;
        }
        else
        {
            i++;
        }
    }
    cout << ans << endl;
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