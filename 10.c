//sum of 10 number
#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;

    printf("Enter up to 10 numbers to sum:\n");

    while (count < 10) {
        scanf("%d", &num);

        if (num < 0) {
            break;
        }

        sum += num;
        count++;
    }

    printf("The sum of the %d numbers is %d\n", count, sum);

    return 0;
}
