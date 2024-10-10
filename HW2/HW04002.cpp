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
        ll n,x,i;
        scanf("%lld%lld%lld",&n,&x,&i);
        ll a[n+5];
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(int j=n;j>i;j--)
        {
            a[j]=a[j-1];
        }
        a[i]=x;
        n++;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0) printf("%lld ",a[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==1) printf("%lld ",a[i]);
        }
        printf("\n");
    }
    return 0;
}