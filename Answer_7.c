#include <stdio.h>

int main() {
    int password = 1234;

    printf("Enter the password:\n");
    scanf("%d", &password);

    if (password == 1234) {
        printf("Access granted");
    }else{
        printf("Access denied");
    }
}