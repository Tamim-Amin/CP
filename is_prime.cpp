#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n)
{
    if(n<2)
    {
        return false;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(is_prime(n))
    {
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime,";
    }
}
