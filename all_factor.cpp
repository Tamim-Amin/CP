#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>factor;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            factor.push_back(i);
            if(i!=n/1){
                factor.push_back(n/i);
            }
        }
    }
    sort(factor.begin(),factor.end());
    for(int i=1;i<factor.size();i++)
    {
       cout<< factor[i]<<" ";
    }
}
