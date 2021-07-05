#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vc;
#define pb push_back
const ll inf = INT_MAX;
int factorial(ll n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
/*___________________*workplace*_______________________*/
void solve()
{
    ll n, m;
    cin >> n >> m;
    char arr[n][m];
    ll i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    bool flag = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i][j] == 'S')
            {
                if (arr[i - 1][j] == 'W' && i!=0)
                {
                    flag = 0;
                    break;
                }
                else if (arr[i + 1][j] == 'W' && i!=(n-1))
                {
                    flag = 0;
                    break;
                }
                else if (arr[i][j - 1] == 'W' && j!=0)
                {
                    flag = 0;
                    break;
                }
                else if (arr[i][j + 1] == 'W' && j!=(m-1))
                {
                    flag = 0;
                    break;
                }
            }
        }
    }
    if (!flag)
    {
        cout << "No" << endl;
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (arr[i][j] == '.')
                {
                    arr[i][j]='D';
                }
            }
        }
        cout<<"Yes"<<endl;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
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