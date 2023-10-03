#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
   if(n<=1)
      return false;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
           return false;
    }
   return true;
}


int main()
{
    int x,y;
    cin>>x>>y;
    
    if(isPrime(x)&&isPrime(y))
       {
           for(int i=x+1;i<y;i++)
               if(isPrime(i))
                   {
                     cout<<"NO"<<endl;
                     return 0;
                   }

            cout<<"YES"<<endl;
       }
    else
       cout<<"NO"<<endl;

    return 0;

}