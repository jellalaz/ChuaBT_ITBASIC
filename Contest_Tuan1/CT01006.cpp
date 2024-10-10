#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

int main()
{   
    ll x,y;
    double c;
    scanf("%lld%lld%lf",&x,&y,&c);
    printf("%lld\n%.2lf",x*y,x*y*1.0*c);

    return 0;
}