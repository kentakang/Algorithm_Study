#include <stdio.h>

int cnt1 = 0, cnt2 = 0;

int fibonacci(n)
{
	if (n == 0)
	{
		cnt1++;
		return 0;
	}
	else if(n == 1)
	{
		cnt2++;
		return 1;
	}
	else
	{
		return fibonacci(n - 1) + fibonacci(n -2);
	}
}

int main()
{
	int n, i, a;
	int array[40][2];
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a);
		fibonacci(a);
		array[i][0] = cnt1;
		array[i][1] = cnt2;
		cnt1 = 0, cnt2 = 0;
	}
	
	for(i = 0; i < n; i++)
	{
		printf("%d %d\n", array[i][0], array[i][1]);
	}
}
