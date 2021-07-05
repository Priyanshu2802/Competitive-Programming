//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n, i, a, m;
    cin >> m;
    n = 2 * m;
    ll arr[5001] = {0};
    vector<pair<ll, ll>> v;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back({a, i + 1});
        arr[a]++;
    }
    bool flag = 1;
    for (i = 0; i < 5001; i++)
    {
        if (arr[i] % 2 != 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        sort(v.begin(), v.end());
        for (i = 0; i < n - 1; i = i + 2)
        {
            cout << v[i].second << " ";
            cout << v[i + 1].second << endl;
        }
    }
    return 0;
}