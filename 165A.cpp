#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, i;
    cin >> n;
    ll arr[n][2], count = 0;
    for (i = 0; i < n; i++)
        cin >> arr[i][0] >> arr[i][1];
    for (i = 0; i < n; i++)
    {
        ll u = 0, d = 0, r = 0, l = 0;
        for (ll j = 0; j < n; j++)
        {
            if (arr[i][0] < arr[j][0] && arr[i][1] == arr[j][1])
                r++;
            else if (arr[i][0] > arr[j][0] && arr[i][1] == arr[j][1])
                l++;
            else if (arr[i][0] == arr[j][0] && arr[i][1] > arr[j][1])
                d++;
            else if (arr[i][0] == arr[j][0] && arr[i][1] < arr[j][1])
                u++;
        }
        if (r >= 1 && d >= 1 && u >= 1 && l >= 1)
            {
                count++;
            }
    }
    cout << count << endl;
    return 0;
}