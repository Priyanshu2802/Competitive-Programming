#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char s[1000];
    cin>>s;
    if(s[0]>='A' && s[0]<='Z')
    cout<<s;
    else if(s[0]>='a' && s[0]<='z')
    {
        s[0]-=32;
        cout<<s;
    }
return 0;
}