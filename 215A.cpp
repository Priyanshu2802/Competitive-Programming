#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, i;
    cin >> n;
    ll arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cin >> m;
    ll brr[m];
    ll j, r = 0, max = 0, q = 0;
    for (i = 0; i < m; i++)
        cin >> brr[i];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (brr[i] % arr[j] == 0)
            {
                q = brr[i] / arr[j];
                if (q > max)
                {
                    max = q;
                    r = 1;
                }
                else if (q == max)
                    r++;
            }
        }
    }
    cout << r << endl;
    return 0;
}