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
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    ll i;
    vector<char> v;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
            v.push_back(s[i]);
    }
    for (i = 0; i < v.size(); i++)
        cout << "." << v[i];
    return 0;
}