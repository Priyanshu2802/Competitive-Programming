#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, sum = 0;
    cin >> n;
    ll arr[7];
    for (i = 0; i < 7; i++)
        cin >> arr[i];
    ll t;
    for (i = 0; i < 7; i++)
    {
        sum += arr[i];
        if (sum >= n)
        {
            t = i + 1;
            break;
        }
        else if (i == 6 && sum < n)
        {
            i = -1;
        }
    }
    cout << t << endl;
    return 0;
}
