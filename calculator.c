#include <stdio.h>
#include <math.h>

double add(double a, double b);
double subtract(double a, double b);

int main(){
    double a = 3, b = 4, results;

    results = subtract(a, b);
    printf("%lf\n", results);

}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}