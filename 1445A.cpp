//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
void solve()
{
    ll n, x, i;
    cin >> n >> x;
    ll arr[n], brr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
        cin >> brr[i];
    sort(brr, brr + n, greater<ll>());
    ll flag = 1;
    for (i = 0; i < n; i++)
    {
        if (arr[i] + brr[i] > x)
        {
            flag = 0;
            break;
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