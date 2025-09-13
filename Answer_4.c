#include <stdio.h>

int main() {
    int age, salary;

    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Enter your salary:\n");
    scanf("%d", &salary);

    if (salary >= 40000 && age >= 25 ) {
        printf("Loan approved");
    }else{
        printf("Loan not approved");
    }
    
    return 0;
}
