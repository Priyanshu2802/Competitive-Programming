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
    ll n, i, a;
    cin >> n;
    unordered_map<ll, ll> m1, m2;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        m1[a]++;
        cin >> a;
        m2[a]++;
    }
    ll sum = 0;
    for(auto v: m1)
    {
        sum += (v.second * m2[v.first]);
    }
    cout << sum << endl;
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