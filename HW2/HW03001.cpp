#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

double tong_if_n_le(int n)
{
    double res = 0;
    for(int i=1;i<=n;i+=2)
    {
        res += 1.0/i;
    }
    return res;
}

double tong_if_n_chan(int n)
{
    double res = 0;
    for(int i=2;i<=n;i+=2)
    {
        res += 1.0/i;
    }
    return res;
}


int main()
{   
    ll t;
    scanf("%lld",&t);
    while(t--)
    {   
        ll n;
        scanf("%lld",&n);
        if(n%2==0)
        {
            printf("%.6lf\n",tong_if_n_chan(n));
        }
        else
        {
            printf("%.6lf\n",tong_if_n_le(n));
        }
    }

    return 0;
}