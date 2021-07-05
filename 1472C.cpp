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
        ll n, i;
        cin >> n;
        ll arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        ll count = 0, j = 0, c;
        for (i = 0; i < n; i++)
        {
            c = 0;
            j = i;
            while (j < n)
            {
                c += arr[j];
                j += arr[j];
            }
            if (c > count)
            {
                count = c;
            }
        }
        cout << count << endl;
    }
    return 0;
}