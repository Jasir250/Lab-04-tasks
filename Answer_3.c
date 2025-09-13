#include <stdio.h>

int main() {
    int num_1, num_2, num_3;

    printf("Enter number 1\n");
    scanf("%d", &num_1);

    printf("Enter number 2\n");
    scanf("%d", &num_2);

    printf("Enter number 3\n");
    scanf("%d", &num_3);

    if (num_1 > num_2) {
        if (num_1 > num_3) {
            printf("Number 1 (%d) was the largest number entered", num_1);
        }else {
            printf("Number 3 (%d) was the largest number entered", num_3);
        }
    }else{
        if (num_2 > num_3) {
            printf("Number 2 (%d) was the largest number entered", num_2);
        }else{
            printf("Number 3 (%d) was the largest number entered", num_3);
        }
    }

    return 0;

}