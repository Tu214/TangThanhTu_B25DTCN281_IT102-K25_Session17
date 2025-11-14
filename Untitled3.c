#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[100];

    printf("Nhap chuoi thu nhat: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Nhap chuoi thu hai: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    char result[300];
    strcpy(result1, str1);
    strcat(result1, str2);
    printf("Ket qua (dung strcat): %s\n", result);

    return 0;
}

