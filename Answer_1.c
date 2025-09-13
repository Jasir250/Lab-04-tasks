#include <stdio.h>

int main() {
    
    float bill_amount;

    printf("Enter the bill amount\n");
    scanf("%f", &bill_amount);

    if (bill_amount > 5000) {
        bill_amount = bill_amount * 0.9;
         printf("The final amount is: %.2f \nYou got a 10%% discount!  ", bill_amount);
    }else{
        printf("The final amount is: %.2f", bill_amount);
    }

    return 0;
}
