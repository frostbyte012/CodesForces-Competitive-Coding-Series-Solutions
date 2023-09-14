#include<bits/stdc++.h>
using namespace std;


bool check_distinct(string s)
{

    map<int,int>mp;
    for(auto x : s)
        mp[x]++;

    return s.size()==mp.size();
}

int main()
{

    int x;
    cin>>x;

    for(int i=x+1;i<INT_MAX;i++)
    {
        if(check_distinct(to_string(i)))
           {
              cout<<i;
              break;
            }
    }


    return 0;
}