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
    string s,a="";
    cin >> s;
    while (s.size())
    {
        if (s.size() % 2 == 0)
        {
            pos = s.size() / 2;
            a += s[pos - 1];
            s.erase(s.begin() + pos);
        }
        else if (s.size() % 2 == 1)
        {
            pos = s.size() / 2;
            a += s[pos];
            pos++;
            s.erase(s.begin() + pos);
        }
    }
    cout << a << endl;
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