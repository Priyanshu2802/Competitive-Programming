//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vll;
#define pb push_back
const ll inf = INT_MAX;
int factorial(ll n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
/*___________________*workplace*_______________________*/
void solve()
{
    ll n,i,sum=0;
    ll arr[4];
    cin>>n;
    for(i=0;i<4;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum>(2*n+2*(n-1)))
    {
        cout<<"NO"<<endl;
    }
    else
    {
        
    }
    
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test_case;
    cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}