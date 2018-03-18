#include <stdio.h>

int division(int number)
{
	int n = number;
	int cnt1 = 1, cnt2 = 1, cnt3 = 1, cnt4 = 1;
	
	while(1)
	{
		if(n == 1 || (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0))
			break;
		else
		{
			if(n % 2 == 0)
			{
				cnt1++;
				n /= 2;
				continue;
			}
			else if(n % 3 == 0)
			{
				cnt2++;
				n /= 3;
				continue;
			}
			else if(n % 5 == 0)
			{
				cnt3++;
				n /= 5;
				continue;
			}
			else if(n % 7 == 0)
			{
				cnt4++;
				n /= 7;
				continue;
			}
		}
	}
	
	if(n == 1)
		return cnt1 * cnt2 * cnt3 * cnt4;
	else
		return cnt1 * cnt2 * cnt3 * cnt4 * 2;
}

int main()
{
	int i, j, a, b, sum = 0;
	scanf("%d %d", &a, &b);
	
	for(i = a; i <= b; i++)
	{
		if(division(i) % 2 == 0)
			sum++;
	}
	
	printf("%d", sum);
}
