// # include <stdio.h>
// int main(){
    
// char box = 4;
// switch (box)
// {
// case 1 : 
// printf("diamond💎\n");

// case 2 :
// printf("gold🥇\n");
// case 3 :
// printf("heart❤ 💖\n");

// default :
// printf("boxes is empty..!\n");
// }
// printf("i thought one ");

// return 0;
//  }
#include <stdio.h>

int main() {
    char box;
    switch (box) {
        case 1 :
            printf("diamond💎\n");
            break;
        case 2 :
            printf("gold🥇\n");
            break;
        case 3 :
            printf("heart❤ 💖\n");
            break;
        default:
            printf("boxes is empty..!\n");
            break;
    }
    printf("i thought one ");

    return 0;
}

