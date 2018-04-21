#include <stdio.h>

int main()
{
	int n, x, i;
	int a[10000];
	scanf("%d %d", &n, &x);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < n; i++)
	{
		if(a[i] < x) printf("%d ", a[i]);
	}
}
