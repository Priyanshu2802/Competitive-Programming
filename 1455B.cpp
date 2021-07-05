#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ll z;
    cin>>z;
    while(z--)
    {
        ll n,i=0,count=0;
        cin>>n;
        ll k=1;
        while(i<n)
        {
            i+=k;
            k++;
            count++;
        }
        ll d=i-n;
        if(d==1)
        {
        cout<<(count+d)<<endl;
        }
        else
        cout<<(count)<<endl;
    }
return 0;
}