# include<stdio.h>
int main(){
    char suite;
    printf("enter the any suit : ");
    scanf("%c", &suite);
    switch (suite)
    {
    case 1 :
    printf("diamond\n");
        break;
    case 2 :
    printf("spade\n");
    break;
    
    default:
    printf("heart\n");
    }
    printf(" i thought one wears a suite\n");
    return 0;
}