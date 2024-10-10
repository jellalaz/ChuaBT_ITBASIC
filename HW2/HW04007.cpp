#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

int tx[1000005];
int main()
{   
    int t;
    scanf("%d",&t);
    while(t--)
    {
        memset(tx,0,sizeof tx); //for(int i=0;i<1000005;i++) tx[i]=0;
        ll n;
        scanf("%lld",&n);
        ll a[n+5];
        for(ll i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            tx[a[i]]++;
        }
        for(ll i=0;i<n;i++)
        {
            if(tx[a[i]]>=2)
            {
                printf("%lld\n",a[i]);
                break;
            }
        }
    }
    return 0;
}