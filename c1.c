# include<stdio.h>
# include<stdlib.h>
# include<string.h>
typedef struct contact
{
    char name[50];
    char phon[20];
    char email[50];
    struct contact *next;
}
contact;
int main(){
    contact *head = NULL;
    
}
