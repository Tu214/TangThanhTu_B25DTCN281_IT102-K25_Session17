#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int choice;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Chon chuc nang:\n");
    printf("1 -> Chuyen thanh chu hoa\n");
    printf("2 -> Chuyen thanh chu thuong\n");
    printf("Nhap lua chon: ");
    scanf("%d", &choice);

    if (choice == 1) {
        for (int i = 0; str[i] != '\0'; i++) {
            str[i] = toupper(str[i]);
        }
        printf("Chuoi sau khi chuyen thanh chu hoa: %s\n", str);
    } else if (choice == 2) {
        for (int i = 0; str[i] != '\0'; i++) {
            str[i] = tolower(str[i]);
        }
        printf("Chuoi sau khi chuyen thanh chu thuong: %s\n", str);
    } else {
        printf("Lua chon khong hop le!\n");
    }

    return 0;
}

