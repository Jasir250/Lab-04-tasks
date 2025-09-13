#include <stdio.h>

int main() {
    int bill_amount;
    int final_amount;


    printf("Enter the bill amount\n");
    scanf("%d", &bill_amount);

    if (bill_amount > 5000) {
        final_amount = bill_amount * 0.9 ;
    }else{
        final_amount = bill_amount ;
    }

    printf("The final amount is: %d", final_amount);
    return 0;
}
