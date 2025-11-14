#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char maxWord[100] = "";
    int maxLen = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    int i = 0, start = 0, len = 0;
    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                int j;
                for (j = 0; j < len; j++) {
                    maxWord[j] = str[start + j];
                }
                maxWord[len] = '\0';
            }
            len = 0;
            start = i + 1;
        }

        if (str[i] == '\0') {
            break;
        }
        i++;
    }

    printf("Tu dai nhat: %s\n", maxWord);
    printf("Do dai: %d\n", maxLen);

    return 0;
}

