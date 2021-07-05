//LordNeo
#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,i;
    string s, l, r;
    cin >> n >> s;
    l = s.substr(0, n);
    r = s.substr(n, 2*n);
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());
    bool strictly_less(true), strictly_more(true);
    for (i = 0; i < n; ++i)
    {
        if (l[i] >= r[i])
        {
            strictly_less = false;
            break;
        }
    }
    for (i = 0; i < n; ++i)
    {
        if (l[i] <= r[i])
        {
            strictly_more = false;
            break;
        }
    }
    cout << ((strictly_less || strictly_more) ? "YES" : "NO") << endl;
    return 0;
}