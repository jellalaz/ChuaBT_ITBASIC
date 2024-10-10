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
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n+5];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            tx[a[i]]++;
        }
        ll res=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==k-a[i])
            {
               res+=tx[a[i]]*(tx[a[i]]-1)/2;
            }
            else
            {
                res+=tx[k-a[i]]*tx[a[i]];
            }
            tx[a[i]]=tx[k-a[i]]=0;
        }
        printf("%lld\n",res);
    }

    return 0;
}