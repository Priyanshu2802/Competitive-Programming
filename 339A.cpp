#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    ll n=s.size();
    ll t=(n/2)+1;
    char arr[t];
    ll j=0,i;
    for(i=0;i<n;i++)
    {
    arr[j]=s[i];
      j++;
      i++;
    }
    sort(arr,arr+t);
    for(i=0;i<t-1;i++)
    cout<<arr[i]<<"+";
    cout<<arr[t-1];

return 0;
}