#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

int main()
{   
    ll d , k , a , b , t ;
    scanf("%lld %lld %lld %lld %lld",&d,&k,&a,&b,&t);
    ll res ;
    if(d <= k)
    {
        /*
            TH này tức là địa điểm healing < khoảng cách xe chiến bị hỏng=)) 
            Thế thì cứ phóng bạt mạng bằng xe máy full thôi
        */
        res = d * a ;
    }
    /*
        Lúc này chạy qua if đầu => xe chiến chắc chắn bị hỏng
        cần tính toán để đi xe or đi bộ hợp lý
    */
    else if(t + k * a > k * b)
    {
        /*
            Trừ khoảng đầu tiên đi xe máy sẽ lợi hơn đi bộ ra . 
            Khi xe chiến hỏng
            có 2 lựa chọn, sửa xe và đi thêm a km nữa rồi hỏng tiếp hoặc đi bộ
            Thì nếu thời gian sửa xe + đi được a km > đi bộ thì chọn đi bộ  chứ sửa làm gì mất thời gian
            mà cả quá trình còn đều lặp lại 2 hành động như thế 
            là ( hỏng -> sửa -> đi 1 đoạn a -> hỏng .... ) và ( đi bộ )
            Vậy nếu mà đi bộ lợi hơn -> đi bộ hết full cmn đoạn đường còn lại đi đi
        */
        res = k * a + (d - k) * b; 
    }
    else
    {
        /*
            Qua được trường hợp 2 (sửa xe -> đi xe) sẽ lợi hơn (đi bộ)
            Vậy tức là Chiến sẽ chỉ có ( đi xe->hỏng->sửa xe->đi tiêp )
            Chia đoạn đường ra làm các khoảng đều nhau
            Mỗi khoảng chiến sẽ (đi->hỏng->sửa)
            Vậy chỉ cần quan tâm việc đi->hỏng->sửa của Chiến là giải được bài toán ?
            Nooooo, quan sát này là gần đúng :>
            Trừ đoạn đường cuối cùng , nó có thể lẻ 1 đoạn bé hơn khoảng dự kiến mà chúng ta đã chia ở trên
            Vậy nên tính toán khoảng này để chọn đi bộ hay như nào cho hợp lý !
            
            Đầu tiên vẫn phải tính các khoảng đều nhau trước 
            Tạo biến dis để đếm các khoảng chia mà mình đã chia ở trên, nó chính là số lần phóng xe máy được đó ._.
            Mỗi lần phóng xe máy là 1 lần reset biến k => dis= d/k
            Tạo biến time_fix để đếm số lần dừng lại sửa xe 
            Lần đầu tiên phóng cmn luôn = xe máy mà không phải sửa gì nên time_fix = dis - 1
            Vậy tổng thời gian đi các khoảng đều nhau là : 
                dis * k * a + time_fix * t  ( giây )
            
            Bây giờ, chỉ cần xét khoảng lẻ cuối cùng là DONE
            Khoảng lẻ cuối cùng có thể tính bằng cách tính : (d%k) chính là số dư khi chia khoảng ra đó=)))

            Kết thúc đoạn áp cuối, là hỏng xe rồi, mình có 2 lựa chọn
            1 là sửa xe và đi nốt đoạn lẻ cuối => t + (d % k) * a 
            2 là đi bộ nốt đoạn cuối => (d % k) * b

            Phần này tương tự trường hợp 2 và dĩ nhiên là chọn cái nhỏ hơn rồi đúng không:))
            Dùng fmin hoặc dùng cái if mà xét ._. (fmin là 1 hàm trong thư viện math.h)
            Đó vậy thì cộng vào thôi :>

            END => res = dis * k * a + time_fix * t + (ll) fmin(t + (d % k) * a , (d % k) * b);

            GOOD LUCK !!!!
        */

        ll dis = d / k ;
        ll time_fix = dis - 1 ;
        res = dis * k * a + time_fix * t + (ll) fmin(t + (d % k) * a , (d % k) * b);
    }
    printf("%lld",res);
    return 0;
}

// Hi vọng em hiểu cách giải của anh , không hiểu hoặc thấy anh giải sai ở đâu có thể ib góp ý nhé !
// Anh không phải người ra đề, và lực anh cũng có hạn nên maybe có thể sai xót !
// Facebook : Trường Giang ( Team 2 ) 
// I am Jellal ._.
// Good luck !!!
//                                                END