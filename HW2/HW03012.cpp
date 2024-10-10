#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

// So co 3 uoc la binh phuong so nguyen to
// -> dem so nguyen to tu sqrt(a) -> sqrt(b) -> co dc ket qua bai toan


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
}

int main()
{   
    int t;
    scanf("%d",&t);
    sang();
    while(t--)
    {
        ll a,b;
        scanf("%lld %lld",&a,&b);
        ll start=sqrt(a);
        ll end=sqrt(b),dem=0;
        if(start*start<a) start++;
        for(int i=start;i<=end;i++)
        {
            if(f[i]==0) dem++;
        }
        printf("%lld\n",dem);
    }
    return 0;
}