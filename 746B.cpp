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
    ll n, pos;
    cin >> n;
    string s;
    cin >> s;
    vector<char> a;

    while (n != 0)
    {
        if (n % 2 == 1)
        {
            a.push_back(s[0]);
        }
        else
        {
            a.insert(a.begin(), s[0]);
        }
        s.erase(0, 1);
        n = s.length();
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
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