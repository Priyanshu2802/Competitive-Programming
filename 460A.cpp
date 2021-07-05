/*****************************************************************************************************************/
//_______________________________________________//LORD_NEO_______________________________________________________/
/*****************************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vc;
const ll inf = INT_MAX;
int factorial(ll n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
/*******************************code**********************************************************************/
void solve()
{
    ll n,m,i=0;
    cin>>n>>m;
    while(i!=n)
    {
        i++;
        if(i%m==0)
        {
        n++;
        }
    }
    cout<<i<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test_case=1;
    while (test_case--)
    {
        solve();
    }
    return 0;
}