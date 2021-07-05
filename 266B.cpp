#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll z;
    ll n,t,i,j;
    cin>>n>>t;
    string s;
    cin>>s;
    for(j=0;j<t;j++)
    {
        for(i=0;i<s.size()-1;i++)
        if(s[i]=='B' && s[i+1]=='G')
        {
        swap(s[i],s[i+1]);
        i++;
        }
    }
    cout<<s;
return 0;
}