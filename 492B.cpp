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
    ll n, l, i;
    cin >> n >> l;
    ll arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    ll mn = 0;
    ll m = arr[0] - 0;
    ll o = l - arr[n - 1];
    for (i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] > mn)
        {
            mn = arr[i] - arr[i - 1];
        }
    }
    double ans = mn;
    if ((ans / 2) >= m && (ans / 2) >= o)
    {
        printf("%.10f\n", ans / 2.);
    }
    else
    {
        if (m > o)
        {
            printf("%.10f\n", m / 1.);
        }
        else
        {
            printf("%.10f\n", o / 1.);
        }
    }
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