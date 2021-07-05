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
    ll n, i, tf = 0, f = 0, h = 0, a;
    cin >> n;
    bool flag = true;
    ll arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 25)
        {
            tf++;
        }
        else if (arr[i] == 50)
        {
            if (tf == 0)
            {
                flag = 0;
                break;
            }
            else if (tf > 0)
            {
                tf--;
                f++;
            }
        }
        else if (arr[i] == 100)
        {
            if (tf > 0 && f > 0)
            {
                tf--;
                f--;
                h++;
            }
            else if (tf > 2)
            {
                tf -= 3;
                h++;
            }
            else
            {
                flag = 0;
                break;
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

    return 0;
}