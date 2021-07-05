/*****************************************************************************************************************/
//_______________________________________________//LORD_NEO_______________________________________________________/
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
ll nC2(ll n)
{
    if (n < 2)
        return 0;
    return (n * (n - 1) / 2);
}
/***********************************************code**************************************************/

void solve()
{
    ll n, m, minNoOfPairs, maxNoOfPairs;
    cin >> n >> m;
    minNoOfPairs = (m - n % m) * (nC2(n / m)) + (n % m) * (nC2(n / m + 1));
    maxNoOfPairs = nC2(n - m + 1);
    cout << minNoOfPairs << " " << maxNoOfPairs << "\n";
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