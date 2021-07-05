#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, a, b;
    cin >> n;
    vector<pair<ll, ll>> v;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        cin >> b;
        v.push_back({a, b});
    }
    ll min = inf, max = 0, pos = -1;
    for (i = 0; i < n; i++)
    {
        if (v[i].first <= min && v[i].second >= max)
        {
            pos = i + 1;
            min = v[i].first;
            max = v[i].second;
        }
    }
    ll flag = 0;
    for (i = 0; i < n; i++)
    {
        if (v[i].first < min || v[i].second > max)
        {
            flag = 1;
            break;
        }
    }
    flag == 0 ? cout << pos << "\n" : cout << -1 << endl;
    return 0;
}