#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

int main()
{   
    ll Max=-9e18,Min=9e18;
    ll n;
    while(scanf("%lld",&n)==1)
    {
        if(n>Max) Max=n;
        if(n<Min) Min=n;
    }
    printf("%lld %lld",Min,Max);
    return 0;
}