#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll z, i, nine = 0, ze = 0;
    cin >> z;
    ll arr[z];
    for (i = 0; i < z; i++)
    {
        cin >> arr[i];
        if (arr[i] == 5)
            nine++;
        else
        {
            ze++;
        }
    }
    if (ze == 0)
    {
        cout << -1 << endl;
    }
    else if (nine < 9)
    {
        cout << 0 << endl;
    }
    else if(nine>=9 && ze!=0)
    {
        ll t = nine / 9;
        for (i = 0; i < (t * 9); i++)
            cout << 5;
        for (i = 0; i < ze; i++)
            cout << 0;
    }

    return 0;
}