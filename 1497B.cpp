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
    ll n, i, k;
    cin >> n >> k;
    ll arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    unordered_map<ll, ll> m;
    for (i = 0; i < n; i++)
    {
        ll sum = 0;
        for (ll j = i; j < n; j++)
        {
            sum += arr[j];
            m[sum]++;
        }
    }
    ll count = 0;
    for (auto x : m)
        if (x.second >= 1 && x.first % k == 0)
        {
            count++;
        }
    cout << count << endl;
}
int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif*/
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