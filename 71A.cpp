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
        string s;
        cin >> s;
        ll n = s.size();
        if (n > 10)
        {
            cout<<s[0]<<n-2<<s[n-1]<<endl;
        }
        else 
        {
            cout<<s<<endl;
        }
    }
    return 0;
}