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
    ll i=0;
    string s;
    cin >> s;
    if (s[0] == s[s.size() - 1])
    {
        cout << "NO" << endl;
    }
    else
    {

        ll a = 0, b = 0, c = 0;
        for ( i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
                a++;
            if (s[i] == 'B')
                b++;
            if (s[i] == 'C')
                c++;
        }
        ll st = s.size() - 1;
        ll t = s.size() / 2;
        if ((a > t) || (b > t) || (c > t))
        {
            cout << "NO" << endl;
        }
        else if((a+b)==c)
        {
            string a=s;
            string b=s;
            for(i=0;i<s.size();i++)
            {
                if(s[i]=='A')
                {
                    a[i]='(';
                }
                if(s[i]=='B')
                {
                    a[i]='(';
                }
                if(s[i]=='C')
                {
                    a[i]=')';
                }
            }
            for(i=0;i<s.size();i++)
            {
                if(s[i]=='A')
                {
                    a[i]=')';
                }
                if(s[i]=='B')
                {
                    a[i]=')';
                }
                if(s[i]=='C')
                {
                    a[i]='(';
                }
            }
            ll o=0,c=0;
            for(i=0;i<a.size();i++)
            {
                if(a[i]=='(')
                o++;
                if(a[i]==')')
                {
                    if(o>0)
                    {
                    o--;
                    }
                    else if(o<0)
                    {
                        c++;
                    }
                }
            }
            if(o==c)
            o=0,c=0;
            for(i=0;i<b.size();i++)
            {
                if(b[i]=='(')
                o++;
                if(b[i]==')')
                {
                    if(o>0)
                    {
                    o--;
                    }
                    else if(o<0)
                    {
                        c++;
                    }
                }
            }
            if()
        }
        else if((a+b)==c)
        {
            string a=s;
            string b=s;
            for(i=0;i<s.size();i++)
            {
                if(s[i]=='A')
                {
                    a[i]='(';
                }
                if(s[i]=='B')
                {
                    a[i]='(';
                }
                if(s[i]=='C')
                {
                    a[i]=')';
                }
            }
            for(i=0;i<s.size();i++)
            {
                if(s[i]=='A')
                {
                    a[i]=')';
                }
                if(s[i]=='B')
                {
                    a[i]=')';
                }
                if(s[i]=='C')
                {
                    a[i]='(';
                }
            }
            ll o=0,c=0;
            for(i=0;i<a.size();i++)
            {
                if(a[i]=='(')
                o++;
                if(a[i]==')')
                {
                    if(o>0)
                    {
                    o--;
                    }
                    else if(o<0)
                    {
                        c++;
                    }
                }
            }
            for(i=0;i<b.size();i++)
            {
                if(b[i]=='(')
                o++;
                if(b[i]==')')
                {
                    if(o>0)
                    {
                    o--;
                    }
                    else if(o<0)
                    {
                        c++;
                    }
                }
            }
            if(o==c)
            {
                
            }
        }
    }
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