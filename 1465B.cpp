#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
#define endl "\n";
bool test(ll);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll z;
    cin >> z;
    while (z--)
    {
        ll n, i,m;
        cin >> n;
        ll t = test(n);
        while (t != 1)
        {
            n++;
            t = test(n);
        }
        cout << n << endl;
    }

    return 0;
}
bool test(ll n)
{
    ll a, b = n, flag = 1;
    while (n != 0)
    {
        a = n % 10;
        if (b % a != 0 && a != 0 )
        {
            flag = 0;
            break;
        }
        else
        {
            n = n / 10;
        }
    }
    return flag;
}