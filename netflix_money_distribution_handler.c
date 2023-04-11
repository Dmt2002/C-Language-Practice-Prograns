#include <stdio.h>

int main(void)
{
    int T;
    int N, X;
    int money;
    scanf("%d", &T);
    while (T > 0)
    {
        scanf("%d %d", &N, &X);
        if (N <= 6)
        {

            printf("%d\n", X);
        }
        else if (N % 6 == 0)
        {
            money = (N / 6) * X;
            printf("%d\n", money);
        }
        else
        {

            money = ((N / 6) + 1) * X;
            printf("%d\n", money);
        }

        T--;
    }
    return 0;
}
