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
    ll i, j = 0,count=0;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
           i+=2;
        }
        else
        {
            cout<<s[i];
            if(s[i+1]=='W' && s[i+2]=='U' && s[i+3]=='B')
            cout<<" ";
        }
    }
    return 0;
}