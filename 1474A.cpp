//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
void solve()
{
    ll n;
    cin >> n;
    string a;
    cin >> a;
    string b = "1";
    for (int i = 1; i < n; i++)
    {
        if ('1' + a[i] != b[i - 1] + a[i - 1])
            b += "1";
        else
            b += "0";
    }
    cout << b << "\n";
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