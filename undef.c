
//   #include<stdio.h>
//   #include<conio.h>
//   void main() {
//     int i, j;
//     for (i = 0; i < 5; i++);

//     {
//     printf("\n");
//     for(j=i; j>0;j--){
//         printf("%d", j);
//     }
//     }
//     getch();
//   }
 #include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces before each row
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print asterisks for each row
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
   
