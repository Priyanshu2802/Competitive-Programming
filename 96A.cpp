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
    ll i, flag = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1] && s[i + 1] == s[i + 2] && s[i + 2] == s[i + 3] && s[i + 3] == s[i + 4] && s[i + 4] == s[i + 5] && s[i + 5] == s[i + 6])
        {
            flag = 1;
            break;
        }
    }
    flag == 1 ? cout << "YES" : cout << "NO" << endl;
    return 0;
}