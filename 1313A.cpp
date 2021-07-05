#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vc;
#define pb push_back
const ll inf = INT_MAX;
int factorial(ll n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
/*___________________*workplace*_______________________*/
void solve()
{
    ll i;
    ll arr[3];
    ll cost[7][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}, {1, 1, 0}, {1, 0, 1}, {0, 1, 1}, {1, 1, 1}};
    for (i = 0; i < 3; i++)
        cin >> arr[i];
    sort(arr, arr + 3, greater<ll>());
    ll ans = 0;
    for (i = 0; i < 7; i++)
    {
        if (arr[0] >= cost[i][0] && arr[1] >= cost[i][1] && arr[2] >= cost[i][2])
        {
            ans++;
            arr[0] -= cost[i][0];
            arr[1] -= cost[i][1];
            arr[2] -= cost[i][2];
        }
    }
    cout << ans << endl;
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