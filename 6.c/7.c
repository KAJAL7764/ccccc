// # include<stdio.h>
// void myFunction(int my_numbers[5]){
// for(int i = 0; i < 5; i++) {
//     printf("%d\n", my_numbers[i]);

// }
// }
// int main(){
// int my_numbers[5] ={ 2, 4, 6, 8, 10};
// myFunction(my_numbers);
// return 0;
// }
// #include<stdio.h>
// int my_function(int, int);  //function declaration

// int main(){  // function of the main method
//     int result = my_function(9, 6);  // call of the function
// printf("%d", result);
// return 0;
// }
// int my_function(int a, int b) {
// return a + b;
// }
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr =fopen("text.txt", "r");
    fclose(fptr);
    if(fptr == NULL){
        printf("file doesnot exist\n");
    }
    else{
        printf("file exist");
    }

    return 0;
}

