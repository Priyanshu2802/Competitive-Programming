//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vc;
const ll inf = INT_MAX;
void solve()
{
    ll n, i, a = 2;
    cin >> n;
    ll arr[n];
    for (i = 0; i < n; i++)
    {
        arr[i] = a;
        a *= 2;
    }
    ll sum1 = 0, sum2 = 0;
    sum1 += arr[n - 1];
    for (i = 0; i < (n / 2) - 1; i++)
    {
        sum1 += arr[i];
    }
    for (i = (n / 2) - 1; i < n - 1; i++)
    {
        sum2 += arr[i];
    }

    cout << (abs(sum2 - sum1)) << endl;
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