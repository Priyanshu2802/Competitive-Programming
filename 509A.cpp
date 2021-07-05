#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vc;
#define pb push_back
const ll inf = INT_MAX;
int factorial(ll n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
/*___________________*workplace*_______________________*/
void solve()
{
    ll n, i, j;
    cin >> n;
    ll arr[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            arr[i][j] = 1;
    }
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            arr[i][j] = (arr[i - 1][j] + arr[i][j - 1]);
        }
    }
    cout << arr[n - 1][n - 1] << endl;
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