#include <stdio.h>

// 'break' escapes for loop

int main(){
    int usranswer;
    for(;;){
        scanf("%d", &usranswer);
        if(usranswer==3){
            printf("You are right\n");
            break;
        }
        printf("You are wrong\n");
    }
    return 0;
}