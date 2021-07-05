//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
void solve()
{
    ll n;
    cin >> n;
    ll tw = 0, th = 0;
    while (n % 2 == 0)
    {
        n /= 2;
        ++tw;
    }
    while (n % 3 == 0)
    {
        n /= 3;
        ++th;
    }
    if (n == 1 && tw <= th)
    {
        cout << 2 * th - tw << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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