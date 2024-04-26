#include <stdio.h>
// function to check whether a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    if (sum == originalNum) {
        return 1; // return true if the number is an Armstrong number
    } else {
        return 0; // return false if the number is not an Armstrong number
    }
}
// function to check whether a number is a perfect number
int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        return 1; // return true if the number is a perfect number
    } else {
        return 0; // return false if the number is not a perfect number
    }
}
int main() {
    int num;
    // ask the user for a number
    printf("Enter a number: ");
    scanf("%d", &num);
    // call the isArmstrong function and isPerfect function with the user input
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    if (isPerfect(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}
