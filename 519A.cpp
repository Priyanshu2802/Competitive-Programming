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
    char arr[8][8];
    ll i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            cin >> arr[i][j];
        }
    }
    ll w = 0, b = 0;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (arr[i][j] == 'Q')
            {
                w += 9;
            }
            if (arr[i][j] == 'R')
            {
                w += 5;
            }
            if (arr[i][j] == 'B')
            {
                w += 3;
            }
            if (arr[i][j] == 'N')
            {
                w += 3;
            }
            if (arr[i][j] == 'P')
            {
                w += 1;
            }
            if (arr[i][j] == 'q')
            {
                b += 9;
            }
            if (arr[i][j] == 'r')
            {
                b += 5;
            }
            if (arr[i][j] == 'b')
            {
                b += 3;
            }
            if (arr[i][j] == 'n')
            {
                b += 3;
            }
            if (arr[i][j] == 'p')
            {
                b += 1;
            }
        }
    }
    if (w > b)
    {
        cout << "White" << endl;
    }
    else if (b > w)
    {
        cout << "Black" << endl;
    }
    else if (b == w)
    {
        cout << "Draw" << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test_case = 1;
    while (test_case--)
    {
        solve();
    }
    return 0;
}