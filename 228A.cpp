#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll arr[4],i,count=0,j;
    for(i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(arr[i]==arr[j])
            {
            count++;
            break;
            }
        }
    }
    cout<<count<<endl;
return 0;
}