#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    string a = "";
    cin >> s;
    ll i, flag = -1, count = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (flag == -1 && s[i] == '1')
        {
            a += s[i];
            flag = 1;
        }
        else if (flag == -1 && s[i] == '0')
            continue;
        else if (flag == 1 && s[i] == '0')
        {
            count++;
            flag = 0;
            continue;
        }
        else
        {
            a += s[i];
        }
    }
    if (count > 0)
    {
        cout << a << endl;
    }
    else
    {
        for (i = 0; i < a.size() - 1; i++)
            cout << a[i];
    }

    return 0;
}