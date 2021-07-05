#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, ans = 0, i, j;
    cin >> n >> m;
    for (i = 0; i <= 1000; i++)
    {
        for (j = 0; j <= 1000; j++)
        {
            if (i * i + j == n && j * j + i == m)
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}