//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vc;
const ll inf = INT_MAX;
void solve()
{
    ll n, i, se = 0, so = 0, a = 2;
    cin >> n;
    if ((n / 2) %2== 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        vector<ll> v;
        for (i = 1; i <= (n / 2); i++)
        {
            v.push_back(a);
            se += a;
            a += 2;
        }
        a = 1;
        for (i = 1; i <= (n / 2); i++)
        {
            v.push_back(a);
            so += a;
            a += 2;
        }
        so -= v[n - 1];
        v[n - 1] = v[n - 1] + (n / 2);
        so += v[n - 1];
        if (se != so)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (i = 0; i < v.size(); i++)
                cout << v[i] << " ";
            cout << endl;
        }
    }
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