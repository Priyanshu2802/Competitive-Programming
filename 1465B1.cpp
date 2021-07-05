#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
#define endl "\n";
bool test(ll arr[] ,ll);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll z;
    cin >> z;
    while (z--)
    {
        ll n,i;
        string s;
        cin>>s;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            arr[i]=s[i];
        }
        ll t=test(arr,n);
        while(t!=1)
        {

        }
    return 0;
}
bool test(ll arr[],ll n)
{
    ll a,b=n,flag=1,i=0;
    while(n!=0)
    {
        n=arr[i];
    }
    return flag;
}