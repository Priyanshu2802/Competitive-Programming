#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, i, j;
    cin >> n >> m;
    string arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < arr[0].size(); j++)
        {
            if ((i + j) % 2 == 0)
            {
                if (arr[i][j] == '.')
                {
                    arr[i][j] = 'B';
                }
            }
            else if ((i + j) % 2 != 0)
            {
                if (arr[i][j] == '.')
                {
                    arr[i][j] = 'W';
                }
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}