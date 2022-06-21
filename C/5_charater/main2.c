#include <stdio.h>

int main(){
    // scanf -> receives variable

    double celsius;

    printf("Enter celsius value to be converted into Fahrenheit : ");
    
    
    int return_scanf = scanf("%lf", &celsius);

    printf("Celsius %lf = Fahrenheit %lf\n", celsius, 9*celsius/5+32);

    // scanf returns the number of variables it receives
    printf("return value of scanf : %d\n", return_scanf);

    return 0;
}