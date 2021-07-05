//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
void solve()
{
    ll arr[4];
    ll i;
    for (i = 0; i < 4; i++)
        cin >> arr[i];
    sort(arr, arr + 4);
    cout<<arr[2]*arr[0]<<endl;
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