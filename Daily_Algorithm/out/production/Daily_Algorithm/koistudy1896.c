#include <stdio.h>

int main()
{
	int a[3];
	int i = 1, m, s, sum = 0;
	scanf("%d", &a[0]);
	scanf("%d", &a[1]);
	scanf("%d", &a[2]);
	scanf("%d", &a[3]);
	sum = a[0] + a[1] + a[2] + a[3];
	
	while(1)
	{
		if(sum - (60 * i) >= 60)
			i++;
		else
		{
			sum = sum - (60 * i);
			s = sum;
			break;
		}
	}

	printf("%d\n%d", i , s);
}
