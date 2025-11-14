#include <stdio.h>
#include <string.h>
#include <ctype.h>


int isPalindrome(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        
        char ci = tolower(str[i]);
        char cj = tolower(str[j]);
        
        if (ci != cj) {
            return 0; 
        }
        i++;
        j--;
    }
    return 1; 
}

int main() {
    char str[100];

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    
    if (isPalindrome(str)) {
        printf("La palindrome\n");
    } else {
        printf("Khong phai palindrome\n");
    }

    return 0;
}

