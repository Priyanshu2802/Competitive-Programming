//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vll;
#define pb push_back
const ll inf = INT_MAX;
int factorial(ll n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
bool cb(ll n)
{
    ll t = cbrt(n);
    while (t * t * t > n)
    {
        t--;
    }
    while (t * t * t < n)
    {
        t++;
    }
    if (t * t * t == n)
    {
        return true;
    }
    return false;
}
/*___________________*workplace*_______________________*/
void solve()
{
    ll n, i, j;
    cin >> n;
    bool flag = 0;
    for (i = 1; i <= n; i++)
    {
        ll ca = i * i * i;
        ll x = n - ca;
        if (x <= 0)
        {
            break;
        }
        else if (cb(x))
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
int main()
{
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