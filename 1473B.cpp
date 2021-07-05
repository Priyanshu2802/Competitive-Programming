//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll z;
    cin >> z;
    while (z--)
    {
        string a, b;
        cin >> a;
        cin >> b;
        string x = a;
        string y = b;
        if (a == b)
        {
            cout << a << endl;
        }
        else
        {
            ll n, m, i;
            n = a.size();

            m = b.size();
            ll c = lcm(n, m);
            ll t = c / a.size();
            ll s = c / b.size();
            for (i = 1; i < t; i++)
            {
                a = a + x;
            }
            for (i = 1; i < s; i++)
            {
                b = b + y;
            }
            if (a == b)
            {
                cout << a << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}