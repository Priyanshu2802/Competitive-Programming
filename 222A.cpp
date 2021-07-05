#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, k, i, pos = -1;
    cin >> n >> k;
    ll arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = n - 1; i >= 0; i--)
    {
        if (arr[i] != arr[k - 1])
        {
            pos = i;
            break;
        }
    }
    if ((pos + 1) > k)
    {
        cout << "-1" << endl;
    }
    else if ((pos + 1) < k)
    {
        cout << pos + 1 << endl;
    }
    return 0;
}