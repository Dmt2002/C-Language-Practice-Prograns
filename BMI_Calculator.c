#include <stdio.h>

int main(void)
{
    int T;
    int M, H;
    int BMI;

    scanf("%d", &T);
    while (T > 0)
    {

        scanf("%d %d ", &M, &H);
        BMI = (M) / (H * H);
        if (BMI <= 18)
            printf("1\n");
        else if (BMI > 18 && BMI <= 24)
            printf("2\n");
        else if (BMI > 24 && BMI <= 29)
            printf("3\n");
        else if (BMI >= 30)
            printf("4\n");

        T--;
    }
    return 0;
}
