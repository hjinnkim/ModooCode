#include <stdio.h>

int main(){
    // If the equation becomes 9/5*celsius+32 -> 9/5 is treated as int / int, therfore the result becomes 1.
    // The suggested way is 9.0 / 5.0 * celsius+32 .

    double celsius;

    printf("Enter celsius value to be converted into Fahrenheit : ");
    
    
    int return_scanf = scanf("%lf", &celsius);

    printf("Celsius %lf = Fahrenheit %lf\n", celsius, 9.0/5.0*celsius+32);

    // scanf returns the number of variables it receives
    printf("return value of scanf : %d\n", return_scanf);

    return 0;
}