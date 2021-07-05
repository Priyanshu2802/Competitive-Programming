//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
void solve()
{
    ll n, i, sum = 0;
    cin >> n;
    ll arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + n, greater<ll>());
    ll t = 0;
    for (i = 0; i < n; i++)
    {
        if (t > sum / 2)
            break;
        t += arr[i];
    }
    cout << i << endl;
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