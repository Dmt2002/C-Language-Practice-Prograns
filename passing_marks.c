#include <stdio.h>

int main(void)
{
    int T;
    int A_min,B_min,C_min,T_min,A,B,C;
    int total;

    scanf("%d", &T);
    while (T > 0)
    {

        scanf("%d %d %d %d %d %d %d", &A_min, &B_min,&C_min,&T_min,&A,&B,&C);
        total=A+B+C;
        if(A>=A_min && B>=B_min && C>=C_min && total>=T_min)
        printf("YES\n");
        else
        printf("NO\n");

        T--;
    }
    return 0;
}
