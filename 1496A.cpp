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
    string s;
    cin >> s;
    bool f = false;

    ll i = 0, j = n - 1;

    ll c = 0;
    while (i < j)
    {
        if (s[i] != s[j])
            break;

        c++;
        i++, j--;
    }

    if (c >= k && n > 2 * k)
        f = true;

    if (f)
        cout << "YES\n";
    else
        cout << "NO\n";
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