#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll i, a = 0, b = 0;
    string arr[n];
    cin >> arr[0];
    a++;
    string c;
    for (i = 1; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] != arr[0])
        {
            b++;
            c = arr[i];
        }
        else if (arr[i] == arr[0])
            a++;
    }
    a > b ? cout << arr[0] << "\n" : cout << c << endl;
    return 0;
}