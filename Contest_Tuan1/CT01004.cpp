#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

int main()
{   
	double a,b,e,t;
	char c,d;
	scanf("%lf %c %lf %c %lf",&a,&c,&b,&d,&e);
	if(c=='+')t=a+b;
	else if(c=='-')t=a-b;
	else if(c=='*')t=a*b;
	else if(c=='/')t=a/b;
    
	if(e==t)printf("YES");
	else printf("NO");

    return 0;
}