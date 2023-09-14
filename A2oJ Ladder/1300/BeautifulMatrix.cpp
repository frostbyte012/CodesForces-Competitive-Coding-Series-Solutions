#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>x(5, vector<int> (5, 0));

    int i,j,posx=0,posy=0;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            int y;
            cin>>y;
            if(y==1)
            {
                posx=i+1;
                posy=j+1;
            }
            x[i][j]=y;
        }
    }

    int result=(abs(3-posx))+(abs(3-posy));

    cout<<result;

  return 0;
}