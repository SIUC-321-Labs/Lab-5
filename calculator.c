#include <stdio.h>
#include <math.h>

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main(){
    double a, b, result;
    int choice;

    // Ask user to pick a value for what arithmetic they want to perform
    printf("Select operation:\n");
    printf("1: Add\n2: Subtract\n3: Multiply\n4: Divide\n");
    scanf("%d", &choice);

    // Uses a switch case for what value the user has entered
    // Each case has error handling to make sure user enters two valid numbers
    // prints results, breaks, then ends program
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

// Takes two inputs adds them together and returns value
double add(double a, double b) {
    return a + b;
}

// Takes two inputs subtracts them and returns value
double subtract(double a, double b) {
    return a - b;
}

// Takes two inputs multiples them and returns value
double multiply(double a, double b) {
    return a * b;
}

// Takes two inputs makes sure b does not equal zero then divides them and returns value
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero.\n");
        return 0;
    }
}