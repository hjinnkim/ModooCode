#include <stdio.h>

//Switch statement
//Without break, computer cannot escape remaining cases
//For example, if input==2, withouit break, you will see
//Cool!
//zzz!
//I cannot understand what you say

//switch condition should be a number

int main(){
    int input;
    printf("My per\n");
    printf("What do yo want to do? \n");
    printf("1. Feeding\n");
    printf("2. Washing\n");
    printf("3. Sleeping\n");

    scanf("%d", &input);

    switch(input){
        case 1:
            printf("Tasty!\n");
            break;
        case 2:
            printf("Cool!\n");
            break;
        case 3:
            printf("zzz\n");
            break;
        default:
            printf("I cannot understand what you say\n");
            break;
    }

    return 0;
}