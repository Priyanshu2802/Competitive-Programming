//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vc;
const ll inf = INT_MAX;
void solve()
{
    ll x, y, i;
    bool flag = 1;
    cin >> x >> y;
    string s;
    cin >> s;
    int u = 0, d = 0, r = 0, l = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == 'U')
        {
            u++;
        }
        if (s[i] == 'D')
        {
            d++;
        }
        if (s[i] == 'R')
        {
            r++;
        }
        if (s[i] == 'L')
        {
            l++;
        }
    }
    if (x > 0 && r < x)
    {
        flag = 0;
    }
    else if (x < 0 && l < abs(x))
    {
        flag = 0;
    }
    if (y > 0 && u < y)
    {
        flag = 0;
    }
    else if (y < 0 && d < abs(y))
    {
        flag = 0;
    }
    if (flag)
    {
        cout << "YES" << endl;
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