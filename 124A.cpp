#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, a, b;
    cin >> n >> a >> b;
    ll ans = a + 1 >= n - b ? a + 1 : n - b;
    cout << (n - ans) + 1 << endl;
    return 0;
}