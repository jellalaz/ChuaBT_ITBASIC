#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

double gt(ll n) //Ham n!
{
    if(n==0) return 1;
    return n*gt(n-1);
}

double pow(double a,ll b)  //Ham a^b
{
    double res=1;
    for(int i=1;i<=b;i++)
    {
        res*=a;
    }
    return res;
}

int main()
{   

    double c,x;
    scanf("%lf%lf",&c,&x);
    ll i=0;
    double esp=1.0*pow(x,0)/(gt(0));
    double sum=0;
    while(esp>c)
    {
        sum+=esp;
        i++;
        esp=1.0*pow(x,i)/(gt(i));
    }
    printf("%.5lf",sum);
    return 0;
}