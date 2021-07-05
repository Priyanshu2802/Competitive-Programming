#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll z;
    cin>>z;
    while(z--)
    {
        string s;
        cin>>s;
        stack<char>a;
        if(s.size()%2!=0)
        {
        cout<<"NO"<<endl;
        }
        else
        {
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='[' || s[i]=='{' || s[i]=='(' || a.empty())
                {
                    a.push(s[i]);
                }
                else if((s[i]==')' && a.top()=='(') || (s[i]=='}' && a.top()=='{') || (s[i]==']' && a.top()=='['))
                {
                    a.pop();
                }
            }
            if(a.empty())
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            }
    }
return 0;
}
// just to check by pairwise not to insert and increase the stack size 