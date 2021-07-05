#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x, y, z;
    cin >> x >> y >> z;
    ll a = sqrt((x * y) / z);
    ll b = sqrt((x * z) / y);
    ll c = sqrt((y * z) / x);
    ll val = (a + b + c) * 4;
    cout << val;
    return 0;
}