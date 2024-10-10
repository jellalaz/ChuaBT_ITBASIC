#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

/*
    https://huynhquysp.wordpress.com/2016/03/25/lam-sao-tinh-nhanh-ra-mot-ngay-bat-ky-la-ngay-thu-may/
*/
int main()
{   
    ll d,m,y,n;
    scanf("%lld/%lld/%lld",&d,&m,&y);
    scanf("%lld",&n);
    //check nam nhuan
    ll nn;
    if((y%4==0&&y%100!=0)||(y%400==0)) nn=1;
    else nn=0;

    int sum_day=0;
    if(m>1) sum_day+=31;
    if(m>2) sum_day+=28+nn;
    if(m>3) sum_day+=31;
    if(m>4) sum_day+=30;
    if(m>5) sum_day+=31;
    if(m>6) sum_day+=30;
    if(m>7) sum_day+=31;
    if(m>8) sum_day+=31;
    if(m>9) sum_day+=30;
    if(m>10) sum_day+=31;
    if(m>11) sum_day+=30;
    sum_day+=d;

    ll S=y+(y-1)/4 - (y-1)/100 + (y-1)/400 + sum_day ;
    //Th1
    if(S%7==0) printf("Thu Bay\n");
    else if(S%7==1) printf("Chu Nhat\n");
    else if(S%7==2) printf("Thu Hai\n");
    else if(S%7==3) printf("Thu Ba\n");
    else if(S%7==4) printf("Thu Tu\n");
    else if(S%7==5) printf("Thu Nam\n");
    else if(S%7==6) printf("Thu Sau\n");
    //TH2 chinh la cong thuc + them n ngay , het ._.
    //Neu n%7==0 thi (S+n)%7=S%7 + n%7 =S%7+0 =S%7 => khong thay doi so du 
    // ==> Truong hop nay bo qua vi chi in 1 lan thoi, no trung TH1 nen khong in ra nua
    if(n%7==0) return 0;
    S+=n;
    if(S%7==0) printf("Thu Bay\n");
    else if(S%7==1) printf("Chu Nhat\n");
    else if(S%7==2) printf("Thu Hai\n");
    else if(S%7==3) printf("Thu Ba\n");
    else if(S%7==4) printf("Thu Tu\n");
    else if(S%7==5) printf("Thu Nam\n");
    else if(S%7==6) printf("Thu Sau\n");

    return 0;
}

