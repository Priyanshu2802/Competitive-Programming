#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll flag=0;
    string a,b;
    cin>>a>>b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    for(ll i=0;i<a.size();i++)
    {
        if(a[i]>b[i])
        {
            flag=1;
            break;
        }
        else if(b[i]>a[i])
        {
            flag=-1;
            break;
        }
    }
    cout<<flag<<endl;
    return 0;
}