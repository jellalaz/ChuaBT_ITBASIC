#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

ll reverse(ll n) //Dao nguoc so
{
    ll res=0;
    while(n>0)
    {
        res=res*10+n%10;
        n/=10;
    }
    return res;
}
ll gcd(ll a, ll b) //UCLN
{
    if(b==0) return a;
    return gcd(b,a%b);
}

int main()
{   
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        if(gcd(n,reverse(n))==1) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}