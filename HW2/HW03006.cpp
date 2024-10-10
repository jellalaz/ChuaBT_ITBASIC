#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

ll tong_cs(ll n)
{
    ll res=0;
    while(n>0)
    {
        res+=n%10;
        n/=10;
    }
    return res;
}
ll reverse(ll n)
{
    ll res=0;
    while(n>0)
    {
        res=res*10+n%10;
        n/=10;
    }
    return res;
}

int main()
{   
    ll n;
    while(scanf("%lld",&n)==1)
    {
        printf("%lld %lld\n",reverse(n),tong_cs(n));
    }
    return 0;
}