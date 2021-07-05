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
    ll n;
    cin >> n;
    ll i = 0;
    string s;
    cin >> s;
    ll c1 = 0, c0 = 0;
    for (i = 0; i < n; ++i)
    {
        if (s[i] == '0')
            ++c0;
        else
            ++c1;
    }
    int m = min(c0, c1);
    cout << n - 2 * m << endl;
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