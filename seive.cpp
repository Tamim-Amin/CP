#include<iostream>
#include<math.h>
using namespace std;
void seive(int n)
{
    bool is_prime[n+1];
    for(int i=0;i<=n;i++)
    {
        is_prime[i]=true;
    }

    is_prime[1]=is_prime[0]=false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(is_prime[i])
        {
            for(int j=i*i;j<=n;j=i+j)
            {
                is_prime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(is_prime[i])
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    cout<<"The prime number up-to"<< n<<" are: ";
    seive(n);
}
