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
    ll n, i, j, k;
    bool flag = 0;
    cin >> n;
    if (n % 3 == 0)
    {
        cout << n / 3 << " " << 0 << " " << 0 << endl;
    }
    else if (n % 5 == 0)
    {
        cout << 0 << " " << n / 5 << " " << 0 << endl;
    }
    else if (n % 7 == 0)
    {
        cout << 0 << " " << 0 << " " << n / 7 << endl;
    }
    else if (n == 8)
    {
        cout << 1 << " " << 1 << " " << 0 << endl;
    }
    else if(n==13)
    {
        cout<<2<<" "<<0<<" "<<1<<endl;
    }
    else
    {
        for (i = 0; i < n / 7; i++)
        {
            for (j = 0; j < n / 5; j++)
            {
                for (k = 0; k < n / 3; k++)
                {
                    if (((i * 7) + (j * 5) + (k * 3)) == n)
                    {
                        flag = 1;
                        cout << k << " " << j << " " << i << endl;
                        break;
                    }
                }
                if (flag)
                {
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }
        if (!flag)
            cout << -1 << endl;
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