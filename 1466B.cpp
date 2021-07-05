#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll z;
    cin >> z;
    while (z--)
    {
        ll n, i, d = 0, s = 0;
        cin >> n;
        ll arr[n];
        ll brr[100000] = {0};
        for (i = 0; i < n; i++)
            cin >> arr[i];
        for (i = 0; i < n; i++)
        {
            brr[arr[i]]++;
        }
        for (i = 0; i < 100000; i++)
        {
            if (brr[i] > 0)
                d++;
            if (brr[i] > 1)
            {
                s++;
            }
        }
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if(s==d && d==1 && s==1)
        {
            cout<<(s+d)<<endl;
        }
        else if (s != d && d > 0 && s > 0)
        {
            cout << (s + d) << endl;
        }
        else if (s == d && d > 0 && s > 0)
        {
            cout << (s + d - 1) << endl;
        }
    }
    return 0;
}