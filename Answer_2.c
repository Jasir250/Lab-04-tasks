#include <stdio.h>

int main() {

    int age;

    printf("Enter your age:\n");
    scanf("%d", &age);

    if (age < 12){
        printf("The ticket price is: 200");
    }else if (age <= 18){
        printf("The ticket price is: 300");
    }else if (age <= 60){
        printf("The ticket price is: 500");
    }else{
        printf("The ticket price is: 250");
    }

    return 0;
}