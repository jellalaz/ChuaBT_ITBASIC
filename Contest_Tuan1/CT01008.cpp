#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

int main()
{   
    ll x,y,n,S;
    scanf("%lld %lld %lld %lld",&x,&y,&n,&S);
    ll k=S/n; //đếm xem cần bao nhiêu tờ n để đạt đến gần S nhất
    
    if(k>x) 
    {
        k=x;  //Nếu k > x thì gán lại k=x thôi chỉ mình chỉ có x tờ nên không thể nhiều hơn x tờ được
    }

    /*
        Do mình đã sử dụng tối đa tờ tiền N để có thể đến gần giá trị S
        Nếu sử dụng thêm bất kì tờ nào nữa dù chỉ 1 tờ thì kết quả cx sẽ lớn hơn S
        Vậy nên để có thể bằng S hay không, lúc này phụ thuộc vào số tờ tiền 1 đồng
    */
    ll tmp=S-k*n; //Làm 1 biến tmp để tính số tờ tiền 1 đồng cần dùng
    if(y>=tmp)   //Nếu số tiền ta có lớn hơn hoặc bằng số tiền cần dùng thì dĩ nhiên có thể tạo được S
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");  //Ngược lại không thể tạo được S vì số tờ tiền ta có không đủ số tờ tiền cần dùng
    }


    return 0;
}