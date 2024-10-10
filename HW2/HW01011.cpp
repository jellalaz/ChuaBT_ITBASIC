#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

const int MAXN=1e6+5;

int f[MAXN];

void sang()
{
    f[0]=f[1]=1;
    for(int i=2;i<=sqrt(MAXN);i++)
    {
        if(f[i]==0)
        {
            for(int j=i*i;j<=MAXN;j+=i)
            {
                f[j]=1;
            }
        }
    }

    //f[i]=0 -> i la so nguyen to
    //f[i]=1 -> i khong phai la so nguyen to
}

int main()
{   
    sang();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll a,b;
        scanf("%lld%lld",&a,&b);
        ll dem=0;
        for(int i=a;i<=b;i++)
        {
            if(f[i]==0) dem++;
        }
        printf("%lld\n",dem);
    }

    return 0;
}