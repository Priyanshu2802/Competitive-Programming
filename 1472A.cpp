#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll z;
    cin >> z;
    while (z--)
    {
        ll w, h, n, a = 0, b = 0,t=0;
        cin >> w >> h >> n;
        while (w % 2 != 1)
        {
            if (w % 2 == 0)
            {
                t++;
                w = w / 2;
            }
            else if (w % 2 == 1)
                break;
        }
        a+=pow(2,t);
        t=0;
        while (h % 2 != 1)
        {
            if (h % 2 == 0)
            {
                t++;
                h = h / 2;
            }
            else
                break;
        }
        b=pow(2,t);
        ll count=a*b;
        count >= n ? cout << "YES"<< "\n": cout << "NO" << endl;
    }
    return 0;
}