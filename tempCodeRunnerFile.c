//  Write a C program to find sum of series 1/1! + 2/2! + 3/3! + … + n/n!
#include <stdio.h>

double factorial(int num) {
    double fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i / factorial(i);
    }

    printf("The sum of the series is: %.6f\n", sum);

    return 0;
}
