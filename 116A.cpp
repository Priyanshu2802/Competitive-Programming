#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   ll n,i,max=0;
   cin>>n;
   ll en=0,ex=0,seat=0;
    for(i=0;i<n;i++)
    {
        cin>>ex>>en;
        if(seat>max)
        max=seat;
        seat=seat-ex+en;
    }
    cout<<max<<endl;
return 0;
}