#include<iostream>
#include<math.h>
using namespace std;
int phi (int n)
{
    int result=1;
    for(int i=2;i<=sqrt(n);i++)
    {
       if(n%i==0)
       {
           int power=0;
           while(n%i==0)
           {
               power++;
               n=n/i;
           }
           result*=(pow(i,power-1)*(i-1));
       }
    }
    if(n>1)
    {
        result*=(n-1);
    }
    return result;
}
int main()
{
    int n;
    cin>>n;
    cout<<phi(n);
}
