#include <stdio.h>

int main(void)
{
	int T;
	int N, X;
	int c;
	scanf("%d", &T);
	while (T > 0)
	{
		scanf("%d %d", &N, &X);

		if (N > X)
		{
			c = N / (3 * X);
			printf("%d \n", c);
		}
		else
		{
			printf("0\n");
		}

		T--;
	}
	return 0;
}
