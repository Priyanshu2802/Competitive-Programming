#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const int INF = INT_MAX;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, mn = INF, mx = 0;
    cin >> n;
    ll arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
    ll t1 = 0, t2 = 0;
    for (i = 0; i < n; i++)
    {
        t1 += (arr[i] == mn);
        t2 += (arr[i] == mx);
    }
    cout << mx - mn << " ";
    if (mn == mx)
        cout << n * (n - 1) / 2;
    else
        cout << t1 * t2;
    return 0;
}