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
    ll count = 0;
    int freq[26]={0};
    for (i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    for (i = 0; i < 26; i++)
    {
        if (freq[i] % 2 != 0)
            count++;
    }
    if (count == 0 || count % 2 != 0)
    {
        cout << "First" << endl;
    }
    else if (count % 2 == 0 && count > 0)
    {
        cout << "Second" << endl;
    }
    return 0;
}