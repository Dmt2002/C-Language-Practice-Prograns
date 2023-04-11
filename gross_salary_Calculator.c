#include <stdio.h>

int main()
{
    int T; // where T is the total number of test cases
    float x,gs,hra,da;
    scanf("%d",&T);
    
    while (T > 0)
    {
        scanf("%f",&x);
        if(x>=1500)
        {
        hra=500;
        da=(x*98)/(100);
        gs=x+hra+da;
        printf("%.2f\n",gs);
        }
        else
        {
            hra=(x*10)/100;
            da=(x*90)/100;
            gs=x+hra+da;
            printf("%.2f\n",gs);
        }
        T--;
    }

    return 0;
}
