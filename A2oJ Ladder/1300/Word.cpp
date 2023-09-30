#include<bits/stdc++.h>
using namespace std;


bool check_count(string s)
{
    int countc=0,counts=0;
    for(auto x: s)
    {
        if(x>='A' && x<='Z')
        countc++;

        else if(x>='a' && x<='z')
            counts++;
    }
    return counts>=countc?0:1;
}

int main()
{

    string s;
    cin>>s;
    if(check_count(s))
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s;
    return 0;
}