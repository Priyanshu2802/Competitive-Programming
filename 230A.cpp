#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, s,flag=1, x,y;
    cin >> s >> n;
    vector<pair<ll,ll>>v;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        if(s>v[i].first)
        {
            s+=v[i].second;
        }
        else if(s<=v[i].first)
        {
            flag=0;
            break;
        }
    }
    flag == 1 ? cout << "YES" : cout << "NO" << endl;
    return 0;
}
