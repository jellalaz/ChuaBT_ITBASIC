#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

ll gcd(ll a, ll b) //UCLN
{
    if(b==0) return a;
    return gcd(b,a%b);
}

ll lcm(ll a, ll b) //BCNN
{
    return a*b/gcd(a,b);
}

int main()
{       
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll a,b;
        scanf("%lld%lld",&a,&b);
        printf("%lld %lld\n",gcd(a,b),lcm(a,b));
    }

    return 0;
}