#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s, a, b;
    ll flag = 1;
    cin >> a;
    cin >> b;
    cin >> s;
    a = a + b;
    ll i, n = a.size(), m = s.size();
    char arr[n + 1], brr[m];
    for (i = 0; i < n; i++)
        arr[i] = a[i];
    for (i = 0; i < m; i++)
        brr[i] = s[i];
    sort(arr, arr + n);
    sort(brr, brr + m);
    if (a.size() != s.size())
    {
        cout << "NO" << endl;
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            if (arr[i] != brr[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}