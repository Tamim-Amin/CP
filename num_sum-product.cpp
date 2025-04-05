#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long total_f=1,sum_f=1,product_f=0,power=0,lim=sqrt(n);
    int origin_num=n;
    for(int div=2;div<=lim;div++)
    {
        power=0;
        while(n%div==0)
        {
            power++;
            n=n/div;
        }
        if(power!=0)
        {
            total_f*=(power+1);
            sum_f*=((pow(div,power+1)-1)/(div-1));
        }
    }
    if(n>1)
    {
        total_f*=2;
        sum_f*=n+1;
    }
    else{
        product_f=pow(origin_num,(total_f/2));
    }
    cout<<sum_f<<endl;
    cout<<total_f<<endl;
    cout<<product_f<<endl;
}
