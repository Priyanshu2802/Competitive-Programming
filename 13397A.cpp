#include<bits/stdc++.h>
using namespace std;
int main()
{
    int z;
    cin>>z;
    while(z--)
    {
        int n,flag=0;
        cin>>n;
        string s;
        for(int i=0;i<n;i++)
        {
            string abc;
            cin>>abc;
            s=s+abc;
        }
        int j=s.size();
        int v[26]={0};
        for(int i=0;i<=j;i++)
        {
            if(s[i]>='a' && s[i]<='z')
            v[s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        cout<<v[i]<<endl;
        for(int i=0;i<n;i++)
        {
            if(v[i]%4!=0)
            flag=1;
        }
        if(flag==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
}