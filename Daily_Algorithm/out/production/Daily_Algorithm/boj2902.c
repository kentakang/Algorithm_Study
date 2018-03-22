#include <stdio.h>

int main()
{
	char str[101];
	int i = 0;
	
	scanf("%s", &str);
	for(i = 0; i < 101; i++)
	{
		if(i == 0 || str[i - 1] == 45) printf("%c", str[i]);
		if(str[i + 1] == 0) break;
	}
}
