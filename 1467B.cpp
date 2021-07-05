//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
void solve()
{
    ll n, i, count = 0, hill = -2, valley = -2, flag = 1, ht = 0, lt = 0;
    cin >> n;
    ll arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
        {
            ht++;
            count++;
            if (hill + 2 == i && ht == 2 && flag == 1)
            {
                count--;
                flag = 0;
            }
            hill = i;
            i++;
        }
        else if (arr[i] < arr[i + 1] && arr[i] < arr[i - 1])
        {
            lt++;
            count++;
            if (valley + 2 == i && lt == 2 && flag == 1)
            {
                count--;
                flag = 0;
            }
            i++;
            valley = i;
        }
    }
    cout << count << endl;
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