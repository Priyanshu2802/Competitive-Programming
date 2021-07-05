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
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test_case;
    cin >> test_case;
    while (test_case--)
    {
        ll n, i, a;
        cin >> n;
        vector<ll> v;
        for (i = 0; i < n; i++)
        {
            cin >> a;
            v.pb(a);
        }
        ll count = 0;
        for (i = 0; i < n - 1; i++)
        {
            ll mx = max(v[i], v[i + 1]);
            ll mn = min(v[i], v[i + 1]);
            if (mx > (2 * mn))
            {
                ll d = (mx - (2 * mn));
                ll s=2*mn;
                while(s<mx)
                {
                    s=2*s;
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}