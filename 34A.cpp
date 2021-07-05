#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll z, i;
    cin >> z;
    ll arr[z];
    for (i = 0; i < z; i++)
        cin >> arr[i];
    ll min = 1000, pos = -1;
    for (i = 0; i < z - 1; i++)
    {
        if (abs(arr[i + 1] - arr[i]) < min)
        {
            min = abs(arr[i + 1] - arr[i]);
            pos = i + 1;
        }
    }
    if (abs(arr[0] - arr[z - 1]) < min)
    {
        cout << z << " " << 1;
    }
    else
    {
        cout << pos << " " << pos + 1 << endl;
    }

    return 0;
}