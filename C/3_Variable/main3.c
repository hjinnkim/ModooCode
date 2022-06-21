#include <stdio.h>

int main(){
    //the following 'f' of the number is to notify that the variable 'a' is the float type.
    //If not, the compiler recognizes it as double type, and it can be truncated because it casts double data to float type.
    float a = 3.141592f;
    double b = 3.141592;
    float c = 3.141592;

    printf("a = %f\n", a);
    printf("b = %f\n", b);
    printf("c = %f\n", c);

    return 0;

}