#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll z;
    cin >> z;
    while (z--)
    {
        ll n, i, d, count = 0;
        ll brr[51] = {0};
        cin >> n;
        ll arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        for (i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                d = abs(arr[i] - arr[j]);
                brr[d]++;
            }
        }
        for (i = 0; i < 51; i++)
        {
            if (brr[i] > 0)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}