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
    ll z;
    cin >> z;
    while (z--)
    {
        ll n, d, i;
        cin >> n >> d;
        ll arr[n], count = 0, flag = 1;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > d)
                flag = 0;
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            sort(arr, arr + n);
            for (i = 0; i < n; i++)
            {
                if (arr[i] < d)
                {
                    for (ll j = i + 1; j < n; j++)
                    {
                        if (arr[j] < d && (arr[i] + arr[j] <= d))
                        {
                            flag = 1;
                            break;
                        }
                    }
                }
            }
            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}