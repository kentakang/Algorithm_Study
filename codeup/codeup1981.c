#include <stdio.h>

int main()
{
    char strTemp[1000];
    char *str;
    FILE *fp = fopen("secret.dic", "r");

    while (!feof(fp))
    {
        str = fgets(strTemp, sizeof(strTemp), fp);
        printf("%s", str);
    }
    
    fclose(fp);
}