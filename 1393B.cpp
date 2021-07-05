#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
typedef long long int ll;
int main()
{
    vector<ll>v;
    ll n,a;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    ll q,p;
    char c;
    cin>>q;
    for(ll i=0;i<q;i++)
    {
        cin>>c;
        cin>>p;
        if(c=='+')
        v.push_back(p);
        else if(c=='-')
        {
            ll m=v.size();
            sort(v.begin(),v.begin()+m);
            vector<ll>::iterator it=lower_bound(v.begin(),v.begin()+m,p);
            ll z=(it-v.begin());
            v.erase(v.begin()+z);
        }
        ll o=v.size();
        if(o%4==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }
return 0;
}