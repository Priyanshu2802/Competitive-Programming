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
        ll count=0,n,i;
        cin>>n;
        i=sqrt(n);
        for(i=n/2;n!=2;i--)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        cout<<count+1<<endl;
    }
return 0;
}