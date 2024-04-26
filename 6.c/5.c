#include<stdio.h>
int sum(int a, int b);



int main() {
    int a, b;
    printf("enter the first number : ");
    scanf("%d", &a);
    printf("enter the second number :");
    scanf("%d", &b);
    sum = sum(a, b);
    printf("sum is :%d\n", sum);
    return 0;

}
int sum(int x, int y) 
{
    return x + y;
}