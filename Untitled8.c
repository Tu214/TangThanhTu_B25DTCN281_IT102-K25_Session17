#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    printf("Nhap mat khau: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0;

    if (strlen(password) < 8) {
        printf("Khong hop le\n");
        return 0;
    }

    for (int i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i])) hasUpper = 1;
        else if (islower(password[i])) hasLower = 1;
        else if (isdigit(password[i])) hasDigit = 1;
        else hasSpecial = 1;
    }

    if (hasUpper && hasLower && hasDigit && hasSpecial) {
        printf("Hop le\n");
    } else {
        printf("Khong hop le\n");
    }

    return 0;
}

