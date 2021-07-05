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
    ll n, k, w, i, sum = 0;
    cin >> k >> n >> w;
    for (i = 1; i <= w; i++)
    {
        sum += (k * i);
    }
    if ((sum - n) > 0)
    {
        sum -= n;
    }
    else
        sum = 0;
    cout << sum << endl;
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