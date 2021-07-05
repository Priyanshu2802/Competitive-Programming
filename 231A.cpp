#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll z,count=0;
    cin >> z;
    while (z--)
    {
        ll a,i,c=0;
        for(i=0;i<3;i++)
        {
            cin>>a;
            if(a==1)
            c++;
        }
        if(c>=2)
        count++;

    }
    cout<<count<<endl;
    return 0;
}