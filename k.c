#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE * fptr;
    fptr = fopen("new1.txt", "r");
    
    if(fptr == NULL){
        printf("read file does't exit");
    }
    else{
        fclose(fptr);
    }
    
      return 0;
}