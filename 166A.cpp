//LordNeo
#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
typedef pair<int,int> pr;
pr(*mkpr)(int,int)=make_pair;
bool cmp(pr u,pr v)
{
	if (u.first==v.first) return u.second<v.second;
	return u.first>v.first;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, i, p;
    cin >> n >> p;
    p--;
    pr v[200];
    for (i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v, v+n,cmp);
    ll count=0;
    for (i = 0; i < n; i++)
    {
        if (v[p] == v[i])
            count++;
    }
    cout << count << endl;
    return 0;
}