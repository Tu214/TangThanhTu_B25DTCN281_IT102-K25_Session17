#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    int i, j;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            for (j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
            i--;
        }
    }

    printf("Chuoi sau khi xoa ky tu: %s\n", str);

    return 0;
}

