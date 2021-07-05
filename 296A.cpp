#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, a;
    cin >> n;
    ll arr[10001] = {0};
    for (i = 0; i < n; i++)
    {
        cin >> a;
        arr[a]++;
    }
    ll t;
    n == 2 ? t = n / 2 : t = (n +1)/ 2;
    ll flag = 1;
    for (i = 0; i < 1001; i++)
    {
        if (arr[i] > t)
        {
            flag = 0;
            break;
        }
    }
    flag == 1 ? cout << "YES"<< "\n": cout << "NO" << endl;
    return 0;
}