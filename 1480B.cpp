//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vc;
const ll inf = INT_MAX;
void solve()
{
    ll a, b, n, i;
    cin >> a >> b >> n;
    ll arr[n], brr[n];
    vector<pair<ll, ll>> v;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
        cin >> brr[i];
    for (i = 0; i < n; i++)
        v.push_back({arr[i], brr[i]});
    sort(v.begin(), v.end());
    bool flag = 1;
    for (i = 0; i < n; i++)
    {
        while (v[i].second > 0)
        {
            v[i].second = v[i].second - a;
            b = b - v[i].first;
            if (b <= 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    if (v[n - 1].second <= 0)
    {
        flag = 1;
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
    ll test_case;
    cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}