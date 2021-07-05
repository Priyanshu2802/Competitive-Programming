//LordNeo
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl "\n";
typedef vector<ll> vll;
typedef vector<pair<ll, ll>> vp;
typedef map<ll, ll> ml;
typedef unordered_map<ll, ll> uml;
#define pb push_back
const ll inf = INT_MAX;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
int factorial(ll n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
ll sm(ll n)
{
    ll ans = 0;
    for (ll i = 0; i <= n; i++)
        ans += i;
    return ans;
}
ll isprime(ll x)
{
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
bool sol(string t, string s)
{
    if (s == t)
        return true;
    int n = s.size();
    int m = t.size();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (t[j] == s[i])
        {
            j++;
            s[i] = '0';
        }
        if (j == t.size())
            return true;
    }
    return false;
}
bool isSubSequence(string str1, string str2, int m, int n)
{
    int j = 0;
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
        {
            j++;
            str2[i] = '0';
        }
    return (j == m);
}

/*___________________*workplace*_______________________*/
bool solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vll t, m;
    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'T')
            t.push_back(i);
        else
            m.push_back(i);
    }
    if (t.size() != 2 * m.size())
        return false;
    for (int i = 0; i < m.size(); i++)
    {
        if (m[i] < t[i] || m[i] > t[i + m.size()])
            return false;
    }
    return true;
}
int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test_case;
    cin >> test_case;
    while (test_case--)
    {
        if (solve())
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}