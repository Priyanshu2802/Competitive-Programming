#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll z,count=0;
    cin >> z;
    while (z--)
    {
        string s;
        cin>>s;
        for(int i=0;i<3;i++)
        {
            if(s[i]=='+')
            {
                count++;
                break;
            }
            else if(s[i]=='-')
            {
                count--;
                break;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}