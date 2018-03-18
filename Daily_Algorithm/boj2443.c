#include <stdio.h>

int main()
{
	int n, i, j, k = 1;
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= k / 2; j++)
			printf(" ");
		for(j = 1; j <= 2 * n - k; j++)
			printf("*");
		
		printf("\n");
		k += 2;
	}
}
