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
        ll n;
        scanf("%lld",&n);
        ll sum=1;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                sum+=i;
                if(i!=n/i) sum+=n/i;
            }
        }
        if(sum==n) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}