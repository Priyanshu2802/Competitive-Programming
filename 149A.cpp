#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll k, i, sum = 0, count = 0;
    cin >> k;
    ll arr[12];
    for (i = 0; i < 12; i++)
        cin >> arr[i];
    sort(arr, arr + 12);
    for (i = 11; i >= 0; i--)
    {

        if (sum >= k)
        {
            break;
        }
        else
        {
            sum += arr[i];
            count++;
        }
    }
    if (sum < k)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << count << endl
    }

    ;
    return 0;
}