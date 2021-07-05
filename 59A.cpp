#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin>>a;
    ll c=0,s=0,i;
    for(i=0;i<a.size();i++)
    {
        if(a[i]>='A' && a[i]<='Z' )
            c++;
        else if(a[i]>='a' && a[i]<='z')
        s++;
    }
    if(c>s)
    {
        transform(a.begin(), a.end(), a.begin(), ::toupper);
        cout<<a;
    }
    else if(s>=c)
    {
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        cout<<a;
    }
return 0;
}