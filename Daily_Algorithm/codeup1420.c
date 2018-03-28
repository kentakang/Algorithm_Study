#include <stdio.h>
#include <string.h>

struct Person {
    int score;
    char name[10];
};

int main()
{
    int n;
    char name[10];
    scanf("%d", &n);
    struct Person p[50];

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", name, &p[i].score);
        strcpy(p[i].name, name);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (p[j].score < p[j + 1].score)
            {
                struct Person temp = p[j + 1];
                p[j + 1] = p[j];
                p[j] = temp;
            }
        }
    }

    printf("%s", p[2].name);
}