#include <stdio.h>

int n3 = 0;

int alarusse(int n1, int n2)
{
	if(n1 % 2 != 0)
		n3 += n2;
	
	n1 >>= 1;
	n2 <<= 1;
	
	if(n1 != 0)
		alarusse(n1, n2);
	else
		return n3;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", alarusse(a, b));
}
