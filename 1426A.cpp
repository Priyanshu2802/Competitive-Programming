#include<bits/stdc++.h>
using namespace std;
int main()
{
    int z;
    cin>>z;
    while(z--)
    {
        int n,x,a=0;
        cin>>n>>x;
        if(n==1 ||n==2)
        cout<<"1"<<endl;
        else{
        int d=(n-2)%x;
        if(d==0)
            a=(n-2)/x;
        else if(d>0)
            a=((n-2)/x)+1;
        cout<<(a+1)<<endl;
        }
    }
return 0;
}