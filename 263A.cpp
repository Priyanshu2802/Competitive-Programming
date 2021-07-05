#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll arr[5][5];
    ll i,j,x=0,y=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]!=0)
            {
            x=i+1;
            y=j+1;
            }
        }
    }
    ll a,b;
    a=abs(x-3);
    b=abs(y-3);
    cout<<a+b<<endl;

return 0;
}