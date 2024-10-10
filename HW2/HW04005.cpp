#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

int cmp(const void *a, const void *b)
{
    int *x=(int*)a;
    int *y=(int*)b;
    return *x-*y;
}
ll Max(ll a, ll b)
{
    if(a>b) return a;
    return b;
}
int main()
{   
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        ll a[n+5];
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        qsort(a,n,sizeof(ll),cmp); //dc dung o >=medium
        //TH1
        ll case1=a[n-2]*a[n-1];
        //TH2
        ll case2=a[0]*a[1];
        //TH3
        ll case3=a[n-3]*a[n-2]*a[n-1];
        //TH4
        ll case4=a[0]*a[1]*a[n-1];

        ll res=Max(case1,Max(case2,Max(case3,case4)));
        printf("%lld\n",res);
    }
    return 0;
}