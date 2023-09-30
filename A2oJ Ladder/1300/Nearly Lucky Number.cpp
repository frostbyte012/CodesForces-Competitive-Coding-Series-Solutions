#include<bits/stdc++.h>
using namespace std;


bool isLuckyDigit(long long int x)
{
    string s=to_string(x);
    
    for(auto x : s)
    {
        if(x!='4' && x!='7')
            return 0;
    }
    return 1;
}

bool isNearLucky(string s)
{
    long long int c=0;

    for(auto x : s)
    {
        if(x=='4' || x=='7')
            c++;
    }

    if(isLuckyDigit(c))
        return 1;

    return 0;
}


int main()
{
    long long int x;
    cin>>x;
    if(isNearLucky(to_string(x)))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}