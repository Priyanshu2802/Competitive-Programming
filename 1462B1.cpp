#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll z;
    cin>>z;
    while(z--)
    {
        ll n,i,flag=0;
        cin>>n;
        string s;
        cin>>s;
        ll a,b;
        ll found;
        for(i=0;i<1;i++)
        {
            {
            string str="2020";
           found=s.find(str);
           if(found==0 || found+3==(n-1))
           {
            flag=1;
            break;
           }
            }
           {
               string str="2";
               string q="020";
               found=s.find(str);
               ll g=s.find(q);
               if(found==0 && g+2==n-1)
               {
                   flag=1;
                   break;
               }
           }
           {
               string str="20";
               string q="20";
               found=s.find(str);
               ll g=s.find(q);
               if(found==0 && g+1==n-1)
               {
                   flag=1;
                   break;
               }
           }
           {
               string str="202";
               string q="0";
               found=s.find(str);
                ll g=s.find(q);
                if(found==0 && g==n-1)
                {
                    flag=1;
                    break;
                }
           }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
            else
            {
                cout<<"NO"<<endl;
            }


    }
return 0;
}