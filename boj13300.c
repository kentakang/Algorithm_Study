#include <stdio.h>

int main()
{
	int n, k, i, j, cnt = 0;
	int arr[2][6] = {0, };
	
	scanf("%d %d", &n, &k);
	for(i = 0; i < n; i++)
	{
		int s, y;
		scanf("%d %d", &s, &y);
		arr[s][y-1]++;
	}
	
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 6; j++)
		{
			cnt = cnt + (arr[i][j] / k);
			if (arr[i][j] % k != 0) cnt++;
		}
	}
	
	printf("%d", cnt);
}

