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
    string s, a;
    vector<string> v;
    cin >> s;
    ll i;
    for (i = 0; i < 5; i++)
    {
        cin >> a;
        v.pb(a);
    }
    bool flag = false;
    for (i = 0; i < 5; i++)
    {
        if (s[0] == v[i][0] || s[1] == v[i][1])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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