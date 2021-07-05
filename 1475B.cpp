//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
void solve()
{
    ll n, m, flag = 0;
    cin >> n;
    ll r, q;
    if (n % 2020 == 0 || n % 2021 == 0)
    {
        flag = 1;
    }
    else if (n % 2020 <= n / 2020)
    {
        flag = 1;
    }
    flag == 1 ? cout << "YES" << "\n": cout << "NO" << endl;
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