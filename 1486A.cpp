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
sm(ll n)
{
    ll i, sum = 0;
    for (i = 0; i <= n; i++)
        sum += i;
    return sum;
}
/*___________________*workplace*_______________________*/
void solve()
{
    ll n, i, sum = 0;
    cin >> n;
    ll arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    bool flag = 1;
    ll sum1 = {0};
    if (sum >= sm(n - 1))
    {
        sum1 += arr[0];
        for (i = 1; i < n; i++)
        {
            sum1 += arr[i];
            if (sum1 < sm(i))
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
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