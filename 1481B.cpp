//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vc;
const ll inf = INT_MAX;
void solve()
{
    ll n, i, k, j, flag = 0, pos = 0;
    cin >> n >> k;
    ll arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (j = 0; j < k; j++)
    {
        for (i = 1; i < n; i++)
        {
            flag=0;
            if (arr[i - 1] < arr[i])
            {
                arr[i - 1] += 1;
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            pos = i;
        }
        else
        {
            pos = -1;
            break;
        }
    }
    cout << pos << endl;
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