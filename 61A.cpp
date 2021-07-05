#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    cin>>a;
    cin>>b;
    vector<ll>v;
    ll i;
    for(i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])
        v.push_back(1);
        else
        {
            v.push_back(0);
        }
        
    }
    for(i=0;i<v.size();i++)
    cout<<v[i];

return 0;
}