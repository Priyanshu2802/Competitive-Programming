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
    ll t = arr[0] - 1;
    for (i = 1; i < m; i++)
    {
        if (arr[i] > arr[i - 1])
            t = t + (arr[i] - arr[i - 1]);
        else if (arr[i] < arr[i - 1])
        {
            t = t + (n - arr[i - 1]);
            t += arr[i];
        }
    }
    cout << t << endl;
    return 0;
}