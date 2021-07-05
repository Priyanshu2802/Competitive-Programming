//LordNeo
#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define endl "\n";
typedef vector<ll> vll;
typedef vector<pair<ll, ll>> vp;
typedef map<ll, ll> ml;
typedef unordered_map<ll, ll> uml;
#define pb push_back
#define ff first
#define ss second
const ll inf = INT_MAX;
const ll mod = 1000000007;
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
    ll ans = n * (4) / 2;
    return ans;
}
bool isprime(ll x)
{
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
bool perfectSquare(ld x)
{
    ld sr = sqrt(x);
    return ((sr - floor(sr)) == 0);
}
bool isValid(string s)
{
    stack<int> st;
    int i = 0;
    while (i < s.length())
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            st.push(s[i]);

        else if (st.empty())
            return false;

        else if ((s[i] == ')' && st.top() == '(') || (s[i] == ']' && st.top() == '[') || (s[i] == '}' && st.top() == '{'))
            st.pop();
        else
            return false;

        i++;
    }

    return st.empty();
}
ll recursion(ll n, ll a, ll b, ll c)
{
    if (n == 1)
    {
        return a;
    }
    else if (n == 2)
    {
        return b;
    }
    else if (n == 3)
    {
        return c;
    }
    else
        return recursion(n - 1, a, b, c) + recursion(n - 2, a, b, c) + recursion(n - 3, a, b, c);
}
/*___________________*workplace*_______________________*/
void solve()
{
    // // ll arr[] = {1, 2, 5};
    // // ll sum;
    // // cin >> sum;
    // // ll i, j;
    // // ll t[4][sum + 1];
    // // for (i = 0; i < 4; i++)
    // // {
    // //     for (j = 0; j < sum + 1; j++)
    // //     {
    // //         if (i == 0 || j == 0)
    // //             t[i][j] = 0;
    // //     }
    // // }
    // // for (i = 1; i < 4; i++)
    // // {
    // //     for (j = 1; j < sum + 1; j++)
    // //     {
    // //         if (arr[i - 1] > j)
    // //         {
    // //             t[i][j] = t[i - 1][j];
    // //         }
    // //         else
    // //         {
    // //             ll q = j / arr[i - 1];
    // //             ll s = q * arr[i];
    // //             if (t[i - 1][j] != 0 && t[i][j-s])
    // //             {
    // //                 t[i][j] = min(t[i - 1][j], (t[i][j - s] + q));
    // //             }
    // //             else
    // //             {
    // //                 t[i][j] = t[i][j - s] + q;
    // //             }
    // //         }
    // //     }
    // // }
    // // for (i = 0; i < 4; i++)
    // // {
    // //     for (j = 0; j < sum + 1; j++)
    // //         cout << t[i][j] << " ";
    // //     cout << endl;
    // // }
    // // // cout << t[n][sum] << endl;
    // // stack<int>s;
    // // s.push(1);
    // // s.push(2);
    // // cout<<s.top();
    // // ll i = 1;
    // // ll count = 0;
    // // for (i = 1; i <= 1000; i++)
    // // {
    // //     if ((i % 3 == 0) || (i % 5 == 0) || (i % 3 == 0 && i % 5 == 0))
    // //     {
    // //         count++;
    // //     }
    // // }
    // // cout << count << endl;
    // // ll n;
    // // cin >> n;
    // // cout << factorial(n) << endl;
    // // ll d, m, n, i;
    // // cin >> d >> m >> n;
    // // vll v(n);
    // // for (i = 0; i < n; i++)
    // //     cin >> v[i];
    // // ll count = 0, tank = m;
    // // vll::iterator x = v.begin();
    // // bool flag = 1;
    // // while (1)
    // // {
    // //     x = lower_bound(x, v.end(), tank);
    // //     x -= 1;
    // //     if(*x)
    // //     if (tank >= d)
    // //     {
    // //         break;
    // //     }
    // //     if (x != v.end())
    // //     {
    // //         tank += (*x);
    // //         count++;
    // //     }
    // //     else
    // //     {
    // //         flag = 0;
    // //         break;
    // //     }
    // // }
    // // if (!flag)
    // // {
    // //     cout << "-1" << endl;
    // //     return;
    // // }
    // // cout << count << endl;
    // ll x;
    // cin >> x;
    // string s = to_string(x);
    // ll n, i, a;
    // cin >> n;
    // map<string, ll> m;
    // getc(stdin);
    // string s;
    // while (getline(cin, s))
    // {

    //     if (n == 0)
    //         break;
    //     m[s]++;
    //     n--;
    // }
    // for (auto x : m)
    //     cout << x.first << " " << x.second << endl;
    // string start, end;
    // cin >> start >> end;
    // int diff = abs(start[0] - end[0]);
    // int d = abs(start[1] - end[1]);
    // if (diff == d)
    // {
    //     cout << "YES" << endl;
    // }
    // else
    //     cout << "NO" << endl;
    // map<pair<ll, ll>, ll> v;
    // ll i, a, b, n;
    // cin >> n;
    // for (i = 0; i < n; i++)
    // {
    //     cin >> a >> b;
    //     v[make_pair(a, b)]++;
    // }
    // for (auto x : v)
    // {
    //     cout << x.first.first << " " << x.first.second << " " << x.second << endl;
    // }

    // ll n, a, b, c;
    // cin >> n >> a >> b >> c;
    // cout << recursion(n, a, b, c) << endl;
    ll n, i;
    cin >> n;
    map<ll, vll> m;
    for (i = 1; i <= n; i++)
    {
        ll a;
        cin >> a;
        m[a].pb(i);
    }
    ll mn = inf, val = 0;
    for (auto x : m)
    {
        if (x.second[0] < mn && x.second.size() > 1)
        {
            mn = x.second[0];
            val = x.first;
        }
    }
    cout << val << endl;
}
int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll test_case = 1;
    //cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}