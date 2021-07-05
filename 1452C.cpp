#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ll z;
    cin>>z;
    while(z--)
    {
        string s;
        cin>>s;
        ll c1=0,c2=0,count=0,i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            c1++;
            if(s[i]==')' && c1>0)
            {
            count++;
            c1--;
            }
            if(s[i]=='[')
            c2++;
            if(s[i]==']'&& c2>0)
            {
                count++;
                c2--;
            }
        }
        cout<<count<<endl;
    }
return 0;
}