#include <stdio.h>

int main()
{
	int i, n;
	scanf("%d", &n);
	
	while(n--)
	{
		int i, hp, mp, atk, def;
		int a[8];
		
		for(i = 0; i < 8; i++)
			scanf("%d", &a[i]);
		
		hp = (a[0] + a[4]);
		mp = (a[1] + a[5]);
		atk = (a[2] + a[6]);
		def = (a[3] + a[7]);
		
		if((hp *= 1) < 1)
			hp = 1;
		if((mp *= 5) < 1)
			mp = 5;
		if((atk *= 2) < 0)
			atk = 0;
		def *= 2;
		 
		printf("%d\n", hp + mp + atk + def);
	}
}
