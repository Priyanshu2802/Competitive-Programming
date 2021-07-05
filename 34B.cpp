#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, i;
    cin >> n >> m;
    ll arr[n], j = 0;
    ll s[100] = {0};
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
        {
            s[j] += arr[i];
            j++;
        }
    }
    sort(s, s + 100);
    ll sum = 0;
    for (i = 0; i < m; i++)
        sum += s[i];
    cout << abs(sum) << endl;
    return 0;
}