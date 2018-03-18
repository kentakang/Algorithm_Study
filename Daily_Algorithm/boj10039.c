#include <stdio.h>

int main()
{
	int i, sum = 0, a;
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &a);
		if(a < 40) sum += 40;
		else sum += a;
	}
	printf("%d\n", sum / 5);
}
