#include <stdio.h>
#include <string.h>

int main() {
    int count = 0;

    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        char str[50] = "";

        scanf("%s", str);

        int x = 0;

        for (int j = 0; j < strlen(str); j++) {
            if (str[j] == '(') {
                x++;
            }

            if (str[j] == ')') {
                x--;
            }

            if (x < 0) {
                break;
            }
        }

        if (x != 0) {
            printf("NO\n");
            continue;
        } else {
            printf("YES\n");
        }
    }

    return 0;
}