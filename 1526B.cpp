//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
void solve()
{
    //it works :)✔
    ll i, j;
    ll arr[9];
    ll div = 11;
    for (i = 0; i < 9; i++)
    {
        arr[i] = div;
        div = (div * 10) + 1;
    }
    ll sum;
    cin >> sum;
    ll t[10][sum + 1];
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < sum + 1; j++)
        {
            if (i == 0)
                t[i][j] = 0;
            if (j == 0)
                t[i][j] = 1;
        }
    }
    for (i = 1; i < 10; i++)
    {
        for (j = 1; j < sum + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                t[i][j] = (t[i][j - arr[i - 1]] + t[i - 1][j]);
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    if (t[9][sum])
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test_case;
    cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}