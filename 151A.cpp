#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    ll arr[3];
    arr[0] = l * k / nl;
    arr[1] = (c * d);
    arr[2] = p / np;
    ll t = *min_element(arr, arr + 3);
    cout << t / n << endl;
    return 0;
}