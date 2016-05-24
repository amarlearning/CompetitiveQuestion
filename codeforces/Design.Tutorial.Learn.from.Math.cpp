#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n = 1000000,t=0,one=0,two=0;
    cin>>t;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    if(t%2 == 0)
    {
      one = two =(t/2);
      while(1)
      {
        if(prime[one]!=0 || prime[two]!=0)
        {
          one++;
          two--;
        }
        else
        {
          cout<<one<<" "<<two;
          break;
        }
      }
    }
    else
    {
      one = (t/2);
      two = (t - (t/2));
      while(1)
      {
        if(prime[one]!=0 || prime[two]!=0)
        {
          one++;
          two--;
        }
        else
        {
          cout<<one<<" "<<two;
          break;
        }
      }
    }
    return 0;
}
