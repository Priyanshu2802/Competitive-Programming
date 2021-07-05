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
bool check(ll r, ll g, ll b, ll w)
{
    if ((r % 2) + (b % 2) + (g % 2) + (w % 2) > 1)
    {
        return false;
    }
    else
        return true;
}
/*___________________*workplace*_______________________*/
void solve()
{
    ll r, g, b, w, o = 0, e = 0;
    cin >> r >> g >> b >> w;
    if (check(r, g, b, w))
    {
        cout << "YES" << endl;
    }
    else if (r > 0 && g > 0 && b > 0 && check(r - 1, b - 1, g - 1, w + 1))
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