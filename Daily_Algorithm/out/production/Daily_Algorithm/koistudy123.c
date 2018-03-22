#include <stdio.h>

int main()
{
	int n, i, j;
	int a[10][3];
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3]);
	}
	
	for(i = 0; i < n; i++)
	{
		int sum = 0;
		
		for(j = 0; j < 4; j++)
		{
			if(a[i][j] == 1)
				sum++;
		}
		
		switch(sum)
		{
			case 1:
				printf("D ");
				break;
			case 2:
				printf("K ");
				break;
			case 3:
				printf("G ");
				break;
			case 4:
				printf("U ");
				break;
			case 0:
				printf("M");
				break;
		}
	}
}
