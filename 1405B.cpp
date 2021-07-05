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
    ll n, i, sum = 0, count = 0;
    cin >> n;
    ll arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    ll dec = 0, inc = 0;
    ll med = sum / n;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < med)
        {
            if (dec > 0)
            {
                dec -= (med - arr[i]);
                inc = dec < 0 ? abs(dec) : 0;
                dec = dec > 0 ? dec : 0;
            }
            else
            {
                inc += (med - arr[i]);
            }
        }
        else if (arr[i] > med)
        {
            dec += (arr[i] - med);
        }
    }
    count = abs(dec);
    cout << count << endl;
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