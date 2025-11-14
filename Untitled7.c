#include <stdio.h>
#include <string.h>

int main() {
    char A[200], B[100];
    int found = 0;

    printf("Nhap chuoi A: ");
    fgets(A, sizeof(A), stdin);
    A[strcspn(A, "\n")] = 0;

    printf("Nhap chuoi B: ");
    fgets(B, sizeof(B), stdin);
    B[strcspn(B, "\n")] = 0;

    int lenA = strlen(A);
    int lenB = strlen(B);

    for (int i = 0; i <= lenA - lenB; i++) {
        int j;
        for (j = 0; j < lenB; j++) {
            if (A[i + j] != B[j]) {
                break;
            }
        }
        if (j == lenB) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Co\n");
    } else {
        printf("Khong\n");
    }

    return 0;
}

