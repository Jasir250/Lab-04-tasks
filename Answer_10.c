#include <stdio.h>

int main() {
    int balance = 100000;
    int withdrawal_amount;

    printf("Welcome to the ATM!\n");
    printf("Your balance is: %d \nYou can only withdraw in multiples of 500\n\n", balance);
    printf("Enter your withdrawal amount:\n");
    scanf("%d", &withdrawal_amount);

    if ((withdrawal_amount % 500 == 0) && (withdrawal_amount < balance)) {
        printf("Withdrawl in process...");
    }else{
        printf("ERROR. Withdrawl amount must be multiple of 500 and should be less than the balance");
    }

}