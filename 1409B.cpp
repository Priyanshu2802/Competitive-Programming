#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll z;
    cin >> z;
    while (z--)
    {
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        ll d1, d2;
        ll d = a, e = b;
        d1 = a - x;
        d2 = b - y;
        if (d1 >= n)
            a = a - n;
        else if (n <= d1 + d2)
        {
            a = x;
            b = b - (n - d1);
        }
        else
        {
            a = x;
            b = y;
        }

        ll min1 = a * b;
        a = d;
        b = e;
        if (d2 >= n)
            b = b - n;
        else if (n <= d1 + d2)
        {
            b = y;
            a = a - (n - d2);
        }
        else
        {
            a = x;
            b = y;
        }

        ll min2 = a * b;
        ll min = min1 <= min2 ? min1 : min2;
        cout << min << endl;
    }
    return 0;
}