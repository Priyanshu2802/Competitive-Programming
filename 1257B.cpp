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
    ll x, y;
    cin >> x >> y;
    bool flag = 0;
    if (x == y)
    {
        flag = 1;
    }
    else if ((x == 2 && y == 3) || (x == 3 && y == 2) || (x > 3) || (x == 2 && y == 1) || (x == 3 && y == 1))
    {
        flag = 1;
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