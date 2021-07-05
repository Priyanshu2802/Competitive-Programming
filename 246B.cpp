#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, a, sum = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        sum += a;
    }
    sum % n == 0 ? cout << n : cout << n - 1 << endl;
    return 0;
}