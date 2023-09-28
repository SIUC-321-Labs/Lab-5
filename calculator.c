#include <stdio.h>
#include <math.h>

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main(){
    double a, b, result;
    int choice;

    printf("Select operation:\n");
    printf("1: Add\n2: Subtract\n3: Multiply\n4: Divide\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            if(scanf("%lf %lf", &a, &b) == 2){
                result = add(a, b);
                printf("Result: %.2lf\n", result);
            }
            else{
                printf("Not a valid number!\n");
            }
            break;
        case 2:
            printf("Enter two numbers: ");
            if(scanf("%lf %lf", &a, &b) == 2){
                result = subtract(a, b);
                printf("Result: %.2lf\n", result);
            }
            else{
                printf("Not a valid number!\n");
            }
            break;
        case 3:
            printf("Enter two numbers: ");
            if(scanf("%lf %lf", &a, &b) == 2){
                result = multiply(a, b);
                printf("Result: %.2lf\n", result);
            }
            else{
                printf("Not a valid number!\n");
            }
            break;
        case 4:
            printf("Enter two numbers: ");
            if(scanf("%lf %lf", &a, &b) == 2){
                result = divide(a, b);
                printf("Result: %.2lf\n", result);
            }
            else{
                printf("Not a valid number!\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;

}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero.\n");
        return 0;
    }
}