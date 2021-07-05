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
/*___________________*workplace*_______________________*/
void solve()
{
    ll t1, t2, k1, k2, n, i, x;
    cin >> t1 >> t2 >> k1 >> k2 >> n;
    x = n;
    for (i = 0; (i < t1) && (n > 0); i++)
    {
        n -= (k1 - 1);
    }
    for (i = 0; (i < t2) && (n > 0); i++)
    {
        n -= (k2 - 1);
    }
    n = n <= 0 ? 0 : n;
    ll mn = 0;
    mn = n >= (t1 + t2) ? (t1 + t2) : n;
    ll mx = 0;
    if (k1 < k2)
    {
        for (i = 0; i < t1 && x > 0; i++)
        {
            x -= k1;
            if (x >= 0)
                mx++;
        }
        for (i = 0; i < t2 && x > 0; i++)
        {
            x -= k2;
            if (x >= 0)
                mx++;
        }
    }
    else if (k2 <= k1)
    {
        for (i = 0; i < t2 && x > 0; i++)
        {
            x -= k2;
            if (x >= 0)
                mx++;
        }
        for (i = 0; i < t1 && x > 0; i++)
        {
            x -= k1;
            if (x >= 0)
                mx++;
        }
    }
    cout << mn << " " << mx << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test_case = 1;
    while (test_case--)
    {
        solve();
    }
    return 0;
}