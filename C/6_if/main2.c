#include <stdio.h>

// denominator must not be 0.
// You will recieve 'inf' if 1.0 divided by 0.0
// If they are integer type, error will occur

int main(){
    double i, j;
    printf("Enter two double type inputs you want to divide\n");
    int num_return_scanf = scanf("%lf%lf", &i, &j);

    printf("The valud of %lf divided by %lf = %lf\n", i, j, i/j);

    printf("Return value of scanf : %d\n", num_return_scanf);

    return 0;
}