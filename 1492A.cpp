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
    ll a, b, c, p;
    cin >> p >> a >> b >> c;
    ll arr[3] = {0};
    arr[0] = p % a;
    arr[1] = p % b;
    arr[2] = p % c;

    if (arr[0])
        arr[0] = a - arr[0];
    if (arr[1])
        arr[1] = b - arr[1];
    if (arr[2])
        arr[2] = c - arr[2];

    cout << min(arr[0], min(arr[1], arr[2])) << "\n";
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