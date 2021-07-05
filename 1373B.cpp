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
    string s;
    cin >> s;
    ll one=0,zero=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        one++;
        else
        zero++;
    }
    min(one,zero)%2==0?cout<<"NET"<<"\n":cout<<"DA"<<endl;
    
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