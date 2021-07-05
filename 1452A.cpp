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
        ll x,y,i,count=0,a=0,b=0;
        cin>>x>>y;
        if(x==0 && y==0)
        {
        cout<<count<<endl;
        }
        else
        {
            for(i=0;a!=x || y!=b;i++)
            {
                if(x>y)
                {
                if(a<x)
                {
                    a++;
                    count++;
                }
                else if(a==x && b!=y)
                count++;
                if(b<y)
                {
                    b++;
                    count++;
                }
                else if(b==y && a!=x)
                count++;
                }
                else
                {
                if(b<y)
                {
                    b++;
                    count++;
                }
                else if(b==y && a!=x)
                count++;
                    /* code */
                if(a<x)
                {
                    a++;
                    count++;
                }
                else if(a==x && b!=y)
                count++;
                }
                
                
            }
            cout<<count<<endl;
        }
        
    }
return 0;
}