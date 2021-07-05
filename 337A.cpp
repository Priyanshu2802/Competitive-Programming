#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, i;
    cin >> n >> m;
    ll arr[m];
    for (i = 0; i < m; i++)
        cin >> arr[i];
    sort(arr, arr + m);
    ll min = 10000;
    for (i = 0; i < m - (n-1); i++)
    {
        if (arr[i + n-1] - arr[i] < min)
        {
            min = arr[i + n-1] - arr[i];
        }
    }
    cout << min << endl;
    return 0;
}