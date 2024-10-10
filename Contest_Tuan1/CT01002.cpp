#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

int main()
{   
	ll a,b;
	scanf("%lld%lld",&a,&b);
	printf("%.2lf",((a-b)*(a-b)+b*b)*1.0/4);
    return 0;
}