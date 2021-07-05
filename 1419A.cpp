//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    bool odd = false, even = false;
    for (int i = 1; i <= n; ++i)
    {
        if (i % 2 == 1)
        {
            odd |= ((s[i - 1] - '0') % 2 == 1);
        }
        else
        {
            even |= ((s[i - 1] - '0') % 2 == 0);
        }
    }
    if (n % 2 == 1)
    {
        cout << (odd ? 1 : 2) << '\n';
    }
    else
    {
        cout << (even ? 2 : 1) << '\n';
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