#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

int main()
{   
    double a , b , d ;
    scanf("%lf %lf %lf",&a,&b,&d);
    if(a<=b)
    {
        printf("NO\n");
    }
    else
    {
        printf("%.3lf",1.0*d/(a-b));
    }
    return 0;
}