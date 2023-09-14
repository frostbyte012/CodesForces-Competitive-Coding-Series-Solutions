#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,ans="";
    cin>>s;
    int i=0;
    
    while(i<s.size())
    {
        if(s[i]=='.')
           ans+='0';
        
        if(s[i]=='-')
           {
               if(s[i+1]=='-')
                  ans+='2';
               else if(s[i+1]=='.')
                  ans+='1';
                  i++;
           }
           
        i++;
        
    }

    cout<<ans;

  return 0;
}