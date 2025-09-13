#include <stdio.h>

int main() {
    float temperature;

    printf("Enter today's temperature:\n");
    scanf("%f", &temperature);

    if (temperature > 30) {
        printf("Hot Day");
    }else{
        printf("Pleasant Day");
    }

    return 0;
}