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
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
/*___________________*workplace*_______________________*/
void solve()
{
    ll n, k, i;
    cin >> n >> k;
    if (n % 3 == 0)
    {
        cout << n / 3 << " " << n / 3 << " " << n / 3 << endl;
    }
    else if (n % 4 == 0)
    {
        cout << n / 4 << " " << n / 4 << " " << n / 2 << endl;
    }
    else
    {
        if (n % 2 == 0)
        {
            if (((n - 2) / 2) % 2 == 1)
            {
                cout << "4 " << (n - 4) / 2 << " " << (n - 4) / 2 << endl;
            }
            else
            {
                cout << "2 " << (n - 2) / 2 << " " << (n - 2) / 2 << endl;
            }
        }
        else if (n % 2 == 1)
        {
            cout << 1 << " " << (n - 1) / 2 << " " << (n - 1) / 2 << endl;
        }
    }
}
int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif*/
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