#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int test(ll);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll s;
    cin>>s;
    s++;
    while(test(s)==0)
    {
        s++;
    }
    cout<<s;
return 0;
}
int test(ll s)
{
    ll i,j;
    bool flag=true;
    ll arr[4];
    for(i=0;i<4;i++)
    {
        arr[i]=s%10;
        s=s/10;
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(arr[i]==arr[j])
            {
                flag=false;
                break;
            }
        }
    }
return flag;
}