#include <stdio.h>

int main()
{
	int a[9] = {0, };
	int i, j = 0, k, n;
	scanf("%d %d", &k, &n);
	
	for(i = 0; i < n; i++)
	{
		int x;
		scanf("%d", &x);
		a[x - 1]++;
	}
	
	for(i = 0; i < k; i++)
	{
		if(a[i] == 0)
		{
			printf("%d ", i + 1);
			j++;
		}
	}
	
	if(j == 0)
		printf("good");
}
