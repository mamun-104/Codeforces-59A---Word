#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    char c;
    int upper=0,lower=0,i;
    for(i=0;i<s.size();i++)
    {
        c=s[i];
        if(c>='A' && c<='Z'){upper++;}
        if(c>='a' && c<='z'){lower++;}
    }
    if(upper>lower)
    {
        for(i=0;i<s.size();i++)
        {
            c=s[i];
            if(c>='a' && c<='z'){c=c-32; s[i]=c;}
        }
    }
    else
    {
        for(i=0;i<s.size();i++)
        {
            c=s[i];
            if(c>='A' && c<='Z'){c=c+32; s[i]=c;}
        }
    }

    cout<<s<<endl;

    return 0;
}




