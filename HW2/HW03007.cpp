#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

int main()
{   
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        ll sum=0,dem_so_uoc=0;
        for(int i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                sum+=n/i+i;
                dem_so_uoc+=2;
                if(i==n/i)
                {
                    sum-=i;
                    dem_so_uoc-=1;
                }
            }
        }
        printf("%lld %lld\n",dem_so_uoc,sum);    
    }

    return 0;
}