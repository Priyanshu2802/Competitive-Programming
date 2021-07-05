#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll z;
    float sum=0,a;
    cin>>z;
    for(ll i=0;i<z;i++)
    {
        cin>>a;
        sum+=a;
    }
    cout<<sum/z<<endl;
return 0;
}