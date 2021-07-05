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
    ll n;
    cin >> n;
    if (n <= 10 || n > 21)
    {
        cout << 0 << endl;
    }
    else if (n > 10 && n < 20 || n == 21)
    {
        cout << 4 << endl;
    }
    else if (n == 20)
    {
        cout << 15 << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test_case=1;
    while (test_case--)
    {
        solve();
    }
    return 0;
}