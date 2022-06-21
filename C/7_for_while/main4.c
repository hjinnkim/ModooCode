#include <stdio.h>

// 'while' statement
// while(condition){ loop }
// loop until condition is not met

// do{ loop } while (condition);
// first loop, check condition. If the condition is not met, excape loop.


int main(){
    int i = 1, sum = 0;
    while(i <= 100){
        sum+=i;
        i++;
    }
    printf("sum from 1 to 100 : %d\n", sum);

    return 0;
}