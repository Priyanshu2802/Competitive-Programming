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
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            flag = 1;
            break;
        }
    }
    flag == 1 ? cout << "YES" : cout << "NO" << endl;
    return 0;
}