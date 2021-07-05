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
    ll arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    ll count = 0;
    for (i = 1; i <= 5; i++)
    {
        sum ++;
        ll r = sum % (n + 1);
        if (r != 1)
            count++;
    }
    cout << count << endl;
    return 0;
}