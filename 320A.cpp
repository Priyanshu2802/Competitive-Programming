#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    ll i;
    ll flag = 1;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
            i = i + 2;
        else if (s[i] == '1' && s[i + 1] == '4')
            i++;
        else if (s[i] != '1')
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}