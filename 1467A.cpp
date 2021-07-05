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
        ll n, i, a = 9;
        cin >> n;
        ll arr[n];
        if (n == 1)
        {
            cout << 9 << endl;
        }
        else if (n == 2)
        {
            cout << 98 << endl;
        }
        else if (n > 2)
        {
            ll arr[n];
            arr[0] = 9;
            arr[1] = 8;
            a = 9;
            for (i = 2; i < n; i++)
            {
                arr[i] = a;
                a++;
                if (a > 9)
                {
                    a = 0;
                }
            }
            for (i = 0; i < n; i++)
                cout << arr[i];
            cout << endl;
        }
    }
    return 0;
}