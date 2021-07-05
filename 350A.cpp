//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, m;
    cin >> n >> m;
    ll arr[n], brr[m];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < m; i++)
        cin >> brr[i];
    sort(arr, arr + n);
    sort(brr, brr + m);
    ll tle = -1;
    ll max=(2 * arr[0])>= arr[n - 1] ? (2 * arr[0]) : arr[n - 1];
    if (max >= brr[0])
    {
        cout << tle << endl;
    }
    else
    {
        cout << max << endl;
    }
    return 0;
}