#include<bits/stdc++.h> 
#include<string.h>
#include<iostream.h>
#include <boost/algorithm/string.hpp>
using namespace std; 

int main() 
{ 
	
	string su,sl;
    cin>>su>>sl;  
	boost::to_upper(su);
    boost::to_upper(sl);
    char a[100],b[100];
    for(int i=0;i<su.size();i++)
    {
        a[i]=su[i];
        b[i]=sl[i];
    }
	int x;
    x=strcmp(a,b);
    cout<<strcmp(a,b);
    if(x==0)
    {
    cout<<"0";
    }
    else if(x<0)
    {
    cout<<"-1";
    }
    else if(x>1)
    {
        cout<<"1";
    }
	return 0; 
} 
