//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
void solve()
{
    ll n, i, flag = 0, count = 2;
    cin >> n;
    ll x = n;
    if (n % 2 == 1)
    {
        flag = 1;
    }
    else
    {
        while (n > 0)
        {
            n /= 2;
            if (n % 2 == 1 && n * count == x && n!=1)
            {
                flag = 1;
                break;
            }
            count *= 2;
        }
    }

    flag == 1 ? cout << "YES"<<"\n" : cout << "NO" << endl;
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