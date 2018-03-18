#include <stdio.h>

int main()
{
	int i, j;
	char a[5][15] = {0,};

	for(i = 0; i < 5; i++)
	{
		scanf("%s", &a[i]);
	}
	
	for(j = 0; j < 15; j++)
	{
		for(i = 0; i < 5; i++)
		{
			if (a[i][j] == 0) continue;
			else printf("%c", a[i][j]);
		}
	}
}
