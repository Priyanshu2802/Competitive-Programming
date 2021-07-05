#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, x,i;
    cin >> n;
    map<ll,ll> data;
    for ( i = 0; i < n; i++)
    {
        cin >> x;
        data[x]++;
    }
    if (data[5] || data[7] || data[1] != n / 3 || data[4] > data[2] || data[6] > data[3] + (data[2] - data[4]) || data[3] > data[6])
    {
        cout << -1;
        return 0;
    }
    while (data[4])
    {
        cout << "1 2 4" << endl;
        data[2]--;
        data[4]--;
    }
    while (data[6])
    {
        data[6]--;
        if (data[2])
        {
            cout << "1 2 6" << endl;
            data[2]--;
        }
        else
        {
            cout << "1 3 6" << endl;
            data[3]--;
        }
    }

    return 0;
}