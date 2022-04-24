#include <stdio.h>
#include <string.h>

int main() {
    while (1) {
        char str[5] = "";

        scanf("%s", str);

        if (str[0] == '0') {
            break;
        } else {
            int length = strlen(str);
            int is_feilndrome = 1;

            for (int i = 0; i < length / 2; i++) {
                if (str[i] != str[(length - 1) - i]) {
                    is_feilndrome = 0;
                    break;
                }
            }

            if (is_feilndrome) {
                printf("yes\n");
            } else {
                printf("no\n");
            }
        }
    }

    return 0;
}