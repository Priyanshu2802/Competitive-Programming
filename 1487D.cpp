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
    ll n, count = 0;
    cin >> n;
    ll a, b, c;
    for (a = 1; a < n - 1; a++)
    {
        for (b = 1; b < n - 1; b++)
        {
            if (((a * a) - b) <= n && ((a * a) - b)!=0)
                count++;
        }
    }
    cout << count << endl;
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