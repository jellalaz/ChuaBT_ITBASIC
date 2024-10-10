#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

int main()
{   
    ll h,m,s;
    scanf("%lld%lld%lld",&h,&m,&s);
    /*
        cứ 1h -> 360/12=30 độ ( 1h là 1 khoảng  trên tổng là 12 khoảng )
        1h=60p = 1 khoảng = 30 độ => 1p = 30/60 = 0.5 độ
        1h=60p=3600s=1 khoảng =30 độ => 1s = 30/3600 = 1/120 độ
    */
    double goc=30*(h%12)+0.5*m+(1.0/120)*s;
    printf("%.7lf",goc);
    return 0;
}