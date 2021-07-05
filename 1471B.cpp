#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll z;
    cin >> z;
    while (z--)
    {
        ll n, i, x, a, sum = 0;
        cin >> n >> x;
        ll arr[n];
        queue<ll> v;
        for (i = 0; i < n; i++)
        {
            cin >> a;
            v.push(a);
        }
        ll flag = 1;
        while (!v.empty())
        {
            sum += v.front();
            if (v.front() % x == 0 && flag == 1)
            {

                ll q = v.front() / x;
                ll t = x;
                while (t--)
                {
                    v.push(q);
                }
            }
            else if (v.front() % x != 0)
            {
                flag = 0;
            }
            v.pop();
            
        }
        cout << sum << endl;
    }
    return 0;
}