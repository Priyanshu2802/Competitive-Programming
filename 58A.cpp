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
    ll arr[5] = {-1}, flag = 1, i;
    arr[0] = s.find('h');
    arr[1] = s.find('e');
    arr[2] = s.find('l');
    arr[3] = s.find('l');
    arr[4] = s.find('o');
    for (i = 1; i < 4; i++)
    {
        if (arr[i-1]>arr[i])
        {
            flag = 0;
            break;
        }
    }
    flag == 1 ? cout << "YES" : cout << "NO" << endl;
    return 0;
}