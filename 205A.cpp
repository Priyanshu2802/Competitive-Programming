#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, i;
    cin >> n;
    ll arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll pos = 0, count = 0, t = *min_element(arr, arr + n);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == t)
        {
            pos = i + 1;
            count++;
        }
    }
    if (count == 1)
    {
        cout << pos << endl;
    }
    else
    {
        cout << "Still Rozdil" << endl;
    }

    return 0;
}