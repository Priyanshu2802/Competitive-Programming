#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    string s;
    ll i,count=0;
    cin>>s;
    for(i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        count++;
    }
    cout<<count<<endl;
return 0;
}