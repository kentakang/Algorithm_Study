#include <stdio.h>

int main() {
    int peoples, size = 0;
    int first, second, third, fourth, fifth = 0;

    scanf("%d %d", &peoples, &size);
    scanf("%d %d %d %d %d", &first, &second, &third, &fourth, &fifth);

    int total_peoples = peoples * size;

    printf("%d %d %d %d %d",
           (total_peoples - first) * -1,
           (total_peoples - second) * -1,
           (total_peoples - third) * -1,
           (total_peoples - fourth) * -1,
           (total_peoples - fifth) * -1
           );

    return 0;
}