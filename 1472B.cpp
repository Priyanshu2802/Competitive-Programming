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
        int n, a = 0, b = 0;
        cin >> n;
        for (int i = 1, x; i <= n; ++i)
        {
            cin >> x;
            if (x == 1)
                ++a;
            else
                ++b;
        }
        int sum = 1 * a + 2 * b;
        if (sum % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int half = sum / 2;
            bool ans = false;
            for (int i = 0; i <= b; ++i)
                if (2 * i <= half && half - 2 * i <= a * 1)
                    ans = true;
            if (ans)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}