//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vc;
const ll inf = INT_MAX;
void solve()
{
    ll n, k;
    cin >> n >> k;

    if (n < k)
    {
        cout << k - n << endl;
    }
    else if (n % 2 == k % 2)
    {
        cout << 0 << endl;
    }

    else
        cout << 1 << endl;
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