//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vc;
const ll inf = INT_MAX;
void solve()
{
    ll i;
    string s;
    cin >> s;
    for (i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (s[i] == 'a')
            {
                s[i] = 'b';
            }
            else
                s[i] = 'a';
        }
        else if (i % 2 == 1)
        {
            if (s[i] == 'z')
            {
                s[i] = 'y';
            }
            else
                s[i] = 'z';
        }
    }
    cout << s << endl;
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