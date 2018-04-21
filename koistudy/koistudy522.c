#include <stdio.h>

int main()
{
	int d, h, m;
	scanf("%d %d %d", &d, &h, &m);
	printf("%d", (((d - 14) * 24) * 60) + (h * 60) + m);
}
