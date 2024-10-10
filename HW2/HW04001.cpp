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
        ll n,d;
        scanf("%lld%lld",&n,&d);
        ll a[n+5];
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(int i=d;i<n;i++)
        {
            printf("%lld ",a[i]);
        }
        for(int i=0;i<=d-1;i++)
        {
            printf("%lld ",a[i]);
        }
        printf("\n");
    }
    return 0;
}