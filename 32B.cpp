#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    ll i;
    vector<ll>v;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='.')
        {
            v.push_back(0);
        }
        else if(s[i]=='-' && s[i+1]=='.')
        {
            v.push_back(1);
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='-')
        {
            v.push_back(2);
            i++;
        }
    }
    for(i=0;i<v.size();i++)
    cout<<v[i];
return 0;
}