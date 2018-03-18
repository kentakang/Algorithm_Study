#include <stdio.h>

int main()
{
	int n, i, cnt = 0;
	scanf("%d", &n);
	for(i = 0; i < 5; i++)
	{
		int a;
		scanf("%d", &a);
		if(a == n) cnt++;
	}
	printf("%d", cnt);
}
