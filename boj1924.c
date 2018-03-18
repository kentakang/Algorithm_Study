#include <stdio.h>

int main()
{
	int i, x, y, day = 0;
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	scanf("%d %d", &x, &y);
	for(i = 1; i < x; i++) day += month[i - 1];
	day += y;
	switch(day % 7)
	{
		case 0:
			printf("SUN");
			break;
		case 1:
			printf("MON");
			break;
		case 2:
			printf("TUE");
			break;
		case 3:
			printf("WED");
			break;
		case 4:
			printf("THU");
			break;
		case 5:
			printf("FRI");
			break;
		case 6:
			printf("SAT");
			break;
	}
} 
