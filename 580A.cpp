/*****************************************************************************************************************/
//LORD_NEO
/*****************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vc;
const ll inf = INT_MAX;

int factorial(ll n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
/******************************************************************************************************************/

void solve()
{
    ll n, i;
    cin >> n;
    ll arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    ll l = 1, max = 1;
    i = 1;
    while (i < n)
    {
        if (arr[i] >= arr[i - 1])
        {
                l++;
        }
        if (l > max)
            max = l;
        if (arr[i] < arr[i - 1])
        {
            l = 1;
        }
        i++;
    }
    cout << max << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test_case = 1;
    while (test_case--)
    {
        solve();
    }
    return 0;
}