#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0)
    {
        printf("Invalid input. Please enter positive integers.\n");
        return 1;
    }

    int result = gcd(num1, num2);
    printf("The GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}