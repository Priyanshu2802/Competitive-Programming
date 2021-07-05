#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll z;
    cin >> z;
    while (z--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll i, pos = -1;
        ll count = 0, t = s.size();
        for (i = t - 1; i >= 0; i--)
        {
            if (s[i] == ')')
                count++;
            else if (s[i] != ')')
            {
                pos = i;
                break;
            }
        }
        if (count > pos + 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}