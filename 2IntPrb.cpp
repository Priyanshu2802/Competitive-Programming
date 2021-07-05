#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  ll z;
  cin>>z;
  while(z--)
  {
    ll a,b,d;
    cin>>a;
    cin>>b;
    ll c=a-b;
    c=abs(c);
    if(c%10==0)
    {
      d=c/10;
    }
    else
    {
      d=c/10+1;
    }
    cout<<d<<endl;
  }
return 0;
}