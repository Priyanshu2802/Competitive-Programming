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
    string s, t;
    cin >> s >> t;
    if (s == t)
    {
        cout << 0 << endl;
    }
    else
    {
        ll count = 0, i = 0;
        reverse(s.begin(), s.end());
        reverse(t.begin(), t.end());
        while (s[i] == t[i])
        {
            i++;
        }
        count = (s.size() + t.size()) - (2 * i);
        cout << count << endl;
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