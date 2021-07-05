#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s, t;
    ll i, flag = 1;
    cin >> s;
    cin >> t;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] != t[s.size() - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    flag == 1 ? cout << "YES\n" : cout << "NO" << endl;
    return 0;
}