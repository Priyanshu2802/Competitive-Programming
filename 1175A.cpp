//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vll;
#define pb push_back
const ll inf = INT_MAX;
int factorial(ll n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
/*___________________*workplace*_______________________*/
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll res = 0;
    while (n > 0)
    {
        if (n % k == 0)
        {
            n /= k;
            ++res;
        }
        else
        {
            long long rem = n % k;
            res += rem;
            n -= rem;
        }
    }

    cout << res << endl;
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