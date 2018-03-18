#include<stdio.h>

int main() 
{
	int n;
	long long a = 2, b = 2;
	scanf("%d", &n);

	while(n--) 
	{
		b += a;
		a = b - a;
	}

	printf("%lld", b);
}
