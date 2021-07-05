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
    ll n, i, j;
    cin >> n;
    ll arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    ll m;
    cin >> m;
    ll brr[m];
    for (i = 0; i < m; i++)
        cin >> brr[i];
    sort(arr, arr + n);
    sort(brr, brr + m);
    i = 0;
    j = 0;
    ll count = 0;
    while (i < n && j < m)
    {
        if (abs(arr[i] - brr[j]) <= 1)
        {
            count++;
            i++;
            j++;
        }
        else
        {
            if (arr[i] < brr[j])
            {
                i++;
            }
            else
                j++;
        }
    }
    cout << count << endl;
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