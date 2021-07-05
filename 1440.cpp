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
        ll n,c0,c1,h,i,first=0,zero=0,ex1,sum3,sum1=0,sum2=0,ex2;
        cin>>n>>c0>>c1;
        cin>>h;
        cin.clear();
        string s;
        cin>>s;
        string arr[n];
        for(i=0;i<n;i++)
        {
            arr[i]=s[i];
            if(arr[i]=="1")
            first++;
            else if(arr[i]=="0")
            zero++;
        }
        if(c0==c1)
            cout<<n*c0<<"\n";
        else
        {
        sum3=(first*c1)+(zero*c0);
        ex1=first*h;
        sum1=c0*n;
        sum1+=ex1;
        ex2=zero*h;
        sum2=c1*n;
        sum2+=ex2;
        if(sum3<=sum2 && sum3<=sum1)
        cout<<sum3<<"\n";
        else if(sum2<=sum1 && sum2<=sum3)
        cout<<sum2<<"\n";
        else if(sum1<=sum2 && sum1<=sum3)
        cout<<sum1<<"\n";
        } 
       
    }   
return 0;
}