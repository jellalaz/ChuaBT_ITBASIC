#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

int main()
{   
    ll x1,y1,x2,y2;
    ll x3,y3,x4,y4;
    scanf("%lld%lld%lld%lld",&x1,&y1,&x2,&y2);
    scanf("%lld%lld%lld%lld",&x3,&y3,&x4,&y4);

    ll left,right,bot,up;
    
    //Kiem tra x ben trai
    if(x1<x3) left=x1;
    else left=x3;
    //Kiem tra x ben phai
    if(x2>x4) right=x2;
    else right=x4;
    //Kiem tra y ben duoi
    if(y1<y3) bot=y1;
    else bot=y3;
    //Kiem tra y ben tren
    if(y2>y4) up=y2;
    else up=y4;

    ll canh_hv;
    //Lấy max khoảng cách left,right và up,bot -> cạnh của hình vuông
    if(right-left > up-bot) canh_hv=right-left;
    else canh_hv=up-bot;

    printf("%lld",canh_hv*canh_hv);

    return 0;
}