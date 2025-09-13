#include <stdio.h>

int main() {
    int num_1, num_2;
    char operation;

    printf("Welcome to the calculator program!\n");

    printf("Enter your first number:\n");
    scanf("%d", &num_1);

    printf("Enter your second number:\n");
    scanf("%d", &num_2);

    printf("Select your operation.\n    Enter '+' for addition\n    Enter '-' for subtraction\n    Enter '*' or 'x' for multiplicaton\n    Enter '/' for division\n");
    scanf(" %c", &operation);
    

    switch (operation)
    {
    case '+':
        printf("The answer is: %d", num_1 + num_2);
        break;
    case '-':
        printf("The answer is: %d", num_1 - num_2);
        break;
    case '*':
        printf("The answer is: %d", num_1 * num_2);
        break;
    case '/':
        printf("The answer is: %d", num_1 / num_2);
        break;
    case 'x':
        printf("The answer is: %d", num_1 * num_2);
        break;

    default:
        printf("Error. Please enter a valid operator");
        break;
    }

    return 0;

}
