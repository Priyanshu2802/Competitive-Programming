#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll z,i,a,count=0;
    cin>>z;
    cin>>a;
    ll max=a,min=a;
    for(i=1;i<z;i++)
    {
        cin>>a;
        if(a<min)
        {
        count++;
        min=a;
        }
        else if(a>max)
        {
        count++;
        max=a;
        }
    }
    cout<<count<<endl;
return 0;
}