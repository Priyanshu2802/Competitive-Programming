#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll z;
    cin>>z;
    while(z--)
    {
        ll n,i;
        string a;
        cin>>n;
        char s[n];
        cin>>a;
        for(i=0;i<n;i++)
        s[i]=a[i];
        sort(s,s+n);
        for(i=n-1;i>=0;i--)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
return 0;
}