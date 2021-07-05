#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, k, count = 0;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        if (k <= n / 2)
            count = (2 * k) - 1;
        else
            count = (k - (n / 2)) * 2;
    }
    else
    {
        if (k <= (n / 2 + 1))
            count = (2 * k) - 1;
        else
            count = (k - (n / 2 + 1)) * 2;
    }
    cout << count << endl;
    return 0;
}