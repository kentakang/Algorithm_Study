#include <stdio.h>

int main()
{
	int i;
	char str[11];
	scanf("%s", &str);
	
	for(i = 0; i < 10; i++)
	{
		if(str[i] - 65 == 0 && str[i+1] - 65 == 0)
			continue;
		else if(str[i] - 65 == 0 && str[i-1] - 65 == 0)
			continue;
		
		if(str[i] - 97 < 0)
			printf("%d", str[i] - 65);
		else
			printf("%d", str[i] - 92);
		
		if(str[i+1] == 0)
			break;
	}
}
