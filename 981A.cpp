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
int isPalindrome(string str)
{
    int l = 0;
    int h = str.size() - 1;
    bool flag = 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
/*___________________*workplace*_______________________*/
void solve()
{
    string s;
    cin >> s;
    bool flag = 1;
    if (s.size() == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        while (flag)
        {
            flag = isPalindrome(s);
            if (flag == 1)
            {
                s.erase(s.begin());
            }
            if (s.size() == 1)
            {
                break;
            }
        }
        if (s.size() == 1)
        {
            cout << "0" << endl;
        }
        else
            cout << s.size() << endl;
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