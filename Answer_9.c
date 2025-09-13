#include <stdio.h>

int main() {
    int internal_marks;
    float attendance;
    
    printf("Enter the student's internal marks:\n");
    scanf("%d", &internal_marks);

    printf("Enter the student's attendance percentage:\n");
    scanf("%f", &attendance);

    if (internal_marks >= 40 && attendance >= 75) {
        printf("The student is eligible for appearing in the exam.\n");
    }else{
        printf("The student cannot appear in the exam.\n");
    }

    return 0;
}