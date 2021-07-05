#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const int N = int(1e5 + 3);

ll n, m, pos[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        pos[num] = i + 1;
    }

    ll sum1 = 0, sum2 = 0;

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int q;
        cin >> q;
        sum1 += pos[q];
        sum2 += n - pos[q] + 1;
    }

    cout << sum1 << " " << sum2 << endl;

    return 0;
}