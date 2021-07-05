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
    ll n, i, a;
    cin >> n;
    vector<ll> v;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for (i = 0; i < n; i++)
        cout << v[i] << " ";
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