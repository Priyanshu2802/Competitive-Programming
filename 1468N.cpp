//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
void solve()
{
    ll c1, c2, c3, a1, a2, a3, a4, a5;
    cin >> c1 >> c2 >> c3;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    c1 -= a1;
    c2 -= a2;
    c3 -= a3;
    if (c1 >= 0 && c2 >= 0 && c3 >= 0)
    {
        ll f = (a4 - c1) >= 0 ? a4 - c1 : 0;
        ll u = (a5 - c2) >= 0 ? a5 - c2 : 0;
        if (c3 >= +f + u)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
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