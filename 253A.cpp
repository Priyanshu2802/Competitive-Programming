//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
const ll inf = INT_MAX;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m, i, count = 0;
    char a, b;
    cin >> n >> m;
    count = min(n, m);
    if (n > m)
    {
        a = 'B';
        b = 'G';
    }
    else
    {
        a = 'G';
        b = 'B';
    }
    for (i = 0; i < count; i++)
        cout << a << b;
    for (i = 0; i < abs(n - m); i++)
        cout << a;
    return 0;
}