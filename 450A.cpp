#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, m;
    cin >> n;
    cin >> m;
    ll arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    ll brr[n];
    ll min = 0, pos = n;
    for (i = 0; i < n; i++)
    {
        brr[i] = (arr[i] - 1) / m;
        if (brr[i] >= min)
        {
            min = brr[i];
            pos = i + 1;
        }
    }
    cout << pos << endl;

    return 0;
}