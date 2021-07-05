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
    ll n, i, z = 0, o = 0, t = 0;
    cin >> n;
    ll arr[n];
    ll brr[3] = {0};
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 3 == 0)
            brr[0]++;
        else if (arr[i] % 3 == 1)
            brr[1]++;
        else if (arr[i] % 3 == 2)
            brr[2]++;
    }
    ll s = n / 3, count = 0;
    if (brr[0] < s)
    {
        if (brr[2] > s && brr[0] < s)
        {
            while (s > brr[0] && brr[2] > s)
            {
                count++;
                brr[2]--;
                brr[0]++;
            }
        }
        if (brr[1] > s && brr[0] < s)
        {
            while (s > brr[0] && brr[1] > s)
            {
                count += 2;
                brr[1]--;
                brr[0]++;
            }
        }
    }
    if (brr[1] < s)
    {
        if (brr[2] > s && brr[1] < s)
        {
            while (s > brr[1] && brr[2] > s)
            {
                count += 2;
                brr[2]--;
                brr[1]++;
            }
        }
        if (brr[0] > s && brr[1] < s)
        {
            while (s > brr[1] && brr[0] > s)
            {
                count++;
                brr[0]--;
                brr[1]++;
            }
        }
    }
    if (brr[2] < s)
    {
        if (brr[0] > s && brr[2] < s)
        {
            while (s > brr[2] && brr[0] > s)
            {
                count += 2;
                brr[0]--;
                brr[2]++;
            }
        }
        if (brr[1] > s && brr[2] < s)
        {
            while (s > brr[2] && brr[1] > s)
            {
                count++;
                brr[1]--;
                brr[2]++;
            }
        }
    }
    cout << count << endl;
}
int main()
{
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