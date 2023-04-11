#include <stdio.h>

int main(void)
{
    int T;
    int X,N,P; 
    int result,wrong;

    scanf("%d", &T);
    while (T > 0)
    {

        scanf("%d %d %d ", &N,&X,&P);
        wrong=N-X;
        result=(X*3)-wrong;
        if(result>=P)
        printf("PASS\n");
        else
        printf("FAIL\n");
      
        T--;
    }
    return 0;
}
