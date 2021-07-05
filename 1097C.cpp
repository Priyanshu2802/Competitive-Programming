//LordNeo
#include <bits/stdc++.h>
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
    ll ans = n * (n + 1) / 2;
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
    ll n = s.size();
    stack<char> st;
    bool flag = 1;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.top() == '(' && !st.empty())
            {
                st.pop();
            }
            else
            {
                flag = 0;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (st.top() == '[' && !st.empty())
            {
                st.pop();
            }
            else
            {
                flag = 0;
                break;
            }
        }
        else if (s[i] == '}')
        {
            if (st.top() == '{' && !st.empty())
            {
                st.pop();
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }
    if (st.empty())
    {
        return flag;
    }
    else
        return false;
}

string tak(string s)
{
    stack<char> st;
    string ans = "";
    ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')' && st.top() == '(')
        {
            st.pop();
        }
        else
            st.push(s[i]);
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    return ans;
}
string wan(string s)
{
    stack<char> st;
    string ans = "";
    ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')' && st.top() == '(')
        {
            st.pop();
        }
        else
            st.push(s[i]);
    }
    while (!st.empty())
    {
        if (st.top() == '(')
        {
            ans += ')';
        }
        else
            ans += '(';
        st.pop();
    }
    return ans;
}
/*___________________*workplace*_______________________*/
void solve()
{
    ll n, i;
    cin >> n;
    string arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<string, ll> take;
    for (i = 0; i < n; i++)
    {
        string a = tak(arr[i]);
        if (a.size() == 0)
        {
            a += 'a';
        }
        take[a]++;
    }
    ll count = 0;
    for (i = 0; i < n; i++)
    {
        string b = wan(arr[i]);
        /*if (b.size() == 0)
        {
            b += 'a';
        }
        if (take[b] > 0)
        {
            count++;
            take[b]--;
        }*/
        cout << b << endl;
    }
    //cout << count / 2 << endl;
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