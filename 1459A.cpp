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
        ll n,i;
        cin>>n;
        string ar,br;
        cin>>ar;
        cin>>br;
        ll m=ar.size();
        char arr[m],brr[m];
        for(i=0;i<m;i++)
        {
            arr[i]=ar[i];
            brr[i]=br[i];
        }
        /*sort(arr,arr+m);
        //sort(brr,brr+m);*/
        ll r=0,b=0;
        for(i=m-1;i>=0;i--)
        {
            if(arr[i]>brr[i])
            r++;
            else if(brr[i]>arr[i])
            b++;
            else if(arr[i]==brr[i])
            {
            r++;
            b++;
            }
        }
        if(r>b)
        {
        cout<<"RED"<<endl;
        }
        else if(b>r)
        {
        cout<<"BLUE"<<endl;
        }
        else if(r==b)
        {
        cout<<"EQUAL"<<endl;
        }
    }
return 0;
}