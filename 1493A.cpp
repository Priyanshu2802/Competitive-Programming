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
    ll n, i, k;
    cin >> n >> k;
    vll v;
    ll sum = 0;
    for (i = 1; i <= n; i++)
    {
        if (i > (k / 2) && i != k && k % 2 == 1)
        {
            v.pb(i);
        }
        else if (i >= ((k + 1) / 2) && i != k && k % 2 == 0)
        {
            v.pb(i);
        }
    }
    cout << v.size() << endl;
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
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