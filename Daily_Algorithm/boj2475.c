#include <stdio.h>

int main()
{
	int i, sum = 0;
	for(i = 0; i < 5; i++)
	{
		int a;
		scanf("%d", &a);
		sum += a * a;
	}
	printf("%d", sum % 10);
}
