#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,i,a;
    cin>>n;
    ll arr[3]={0};
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
        arr[0]++;
        else if(a==2)
        arr[1]++;
        else if(a==3)
        arr[2]++;
    }
    sort(arr,arr+3);
    cout<<(arr[0]+arr[1])<<endl;
    return 0;
}