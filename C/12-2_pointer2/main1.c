#include <stdio.h>

int main(){
    int a=1;
    int b;
    const int* pa = &a;
    printf("%p\n", pa);
    
    a=0; //Possible
    
    pa = &b;
    printf("%p\n", pa);

    //*pa = 1; //Impossible

    return 0;
}