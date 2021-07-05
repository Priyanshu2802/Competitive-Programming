#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, k, i;
    ll sum = 0, min = inf, j, pos = 1;
    cin >> n >> k;
    ll arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < k; i++)
        sum += arr[i];
    for (i = 0; i <= n - k; i++)
    {
        if (sum < min)
        {
            min = sum;
            pos = i + 1;
        }
        sum -= arr[i];
        sum += arr[k + i];
    }
    cout << pos << endl;
    return 0;
}