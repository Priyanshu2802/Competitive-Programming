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
    ll n, k, i;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        k % n == 0 ? cout << n << "\n" : cout << k % n << endl;
    }
    else if (n % 2 == 1)
    {
        ll div=n/2;
        ll d=(k-1)/div;
        k+=d;
        k % n == 0 ? cout << n << "\n" : cout << k % n << endl;
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