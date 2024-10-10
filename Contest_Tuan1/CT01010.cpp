#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

/*
    Nhận thấy sau mỗi bước chúng ta sẽ bớt đi 1 phần tử và thêm vào tối đa K phần tử 

    ⇒ Số lượng phần tử sẽ tăng thêm là K-1 phần tử

    Tập hợp ban đầu có 1 phần tử và cuối cùng sau khi biến đổi là N phần tử 

    ⇒ Số phần tử sẽ tăng lên là (N-1) phần tử

    ⇒ Đáp án là (N-1) / (K-1) .

    Trường hợp không chia hết thì phải cộng thêm 1 do thêm 1 bước biến đổi nữa

*/
int main()
{   
    int n,k,res;
    scanf("%d%d",&n,&k);

    //Cach 1 : 
    if((n-1) % (k-1) ==0) res = (n-1)/(k-1);
    else res = (n-1)/(k-1) + 1;

    //Cach 2 : Vẫn lời giải như trên nhưng công thức này không cần dùng if
    /*
        res = (n-1 + k-1 -1 )/(k-1); //(n+a-1)/a
    */
    printf("%d\n",res);
    
    return 0;
}
