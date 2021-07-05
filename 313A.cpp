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
/*****************************************************************************************************/
void solve()
{
    ll n, i;
    cin >> n;
    if (n >= 0)
    {
        cout << n << endl;
    }
    else
    {
        vector<ll> v;
        n = abs(n);
        while (n > 0)
        {
            ll r = n % 10;
            v.push_back(r);
            n /= 10;
        }
        if (v[0] > v[1])
        {
            v.erase(v.begin() + 0);
        }
        else
            v.erase(v.begin() + 1);
        if (v.size() == 1 && v[0] == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << "-";
            for (i = v.size() - 1; i >= 0; i--)
                cout << v[i];
        }
    }
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