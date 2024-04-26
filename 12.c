#include<stdio.h>
enum months{jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};
int main(){
    enum months week;
    week = may;
printf("%d", week);
return 0;
}