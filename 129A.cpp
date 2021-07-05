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
/*****************************************************************************************************/
void solve()
{
    ll n, i, e = 0, o = 0, sum = 0;
    cin >> n;
    ll arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            e++;
        else
            o++;
        sum += arr[i];
    }
    if (sum % 2 == 0)
    {
        cout << e << endl;
    }
    else
        cout << o << endl;
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