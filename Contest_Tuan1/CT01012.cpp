#include<stdio.h>

#include<math.h>

const long long INF = 1e9 + 10, MOD = 1e9 + 7;
const long long MaxN = 1e6 + 1;

signed main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);

    if(x < y)
    {
        printf("-1");
        return 0;
    }

    double d1 = x + y;
    double maxHeight1 = d1 / 2.0;
    double numOfPile1 = floor(maxHeight1 / y);
    double height1 = maxHeight1 / numOfPile1;

    //lock in
    double d2 = x - y;
    double maxHeight2 = d2 / 2.0;
    double numOfPile2 = floor(maxHeight2 / y);
    double height2 = maxHeight2 / numOfPile2;

    printf("%.11lf", height1 < height2 ? height1 : height2);

    return 0;
}
