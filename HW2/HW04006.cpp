#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], mark[100000] = {0};
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            mark[a[i]]++;
        }
        for(int i = 0; i < n; i++)
        {
            if(mark[a[i]])
            {
                printf("%d %d\n", a[i], mark[a[i]]);
                mark[a[i]] = 0;
            }
        }
        printf("\n");
    }
    return 0;
}