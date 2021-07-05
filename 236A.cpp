#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    ll i, t = s.size();
    char arr[t];
    for (i = 0; i < t; i++)
        arr[i] = s[i];
    ll count = 0;
    sort(arr, arr + t);
    for (i = 0; i < t - 1; i++)
    {
        if (arr[i] != arr[i + 1])
            count++;
    }
    count++;
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}