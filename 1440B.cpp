#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll z;
    cin>>z;
    while(z--)
    {
       ll n,i,k,sum=0,med;
       cin>>n>>k;
       ll d=n*k;
       if(n%2==0)
       med=(n/2)-1;
       else if(n%2!=0)
       med=n/2;
       ll arr[d],j;
       for(i=0;i<d;i++)
       cin>>arr[i];
       sort(arr,arr+d);
       ll brr[n];
       for(i=0;i<d;i++)
       {
        j=0;
           for(i;j<n;i++)
           {
               brr[j]=arr[i];
               j++;
           }
           sum+=brr[med];
           i--;
       }
       cout<<sum<<"\n";
    }   
return 0;
}