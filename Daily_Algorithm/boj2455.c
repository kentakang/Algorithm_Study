#include <stdio.h>

int main()
{
	int sum = 0, max = 0, i;
	
	for(i = 0; i < 4; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		sum += b;
		sum -= a;
		if(max <= sum) max = sum;
	}
	
	printf("%d", max);
}
