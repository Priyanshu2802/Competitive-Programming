//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
void solve()
{
    ll n, i, a, b, c, j, pieces = 0;
    cin >> n >> a >> b >> c;
    for (i = 0; i * a <= n; ++i)
    {
        for (j = 0; i * a + j * b <= n; ++j)
        {
            ll k = (n - i * a - j * b) / c;
            if (i * a + j * b + k * c == n)
                pieces = max(i + j + k, pieces);
        }
    }
    cout << pieces << endl;
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