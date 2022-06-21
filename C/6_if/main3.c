#include <stdio.h>

int main(){
    double i, j;
    printf("Enter two double type inputs you want to divide\n");
    int num_return_scanf = scanf("%lf%lf", &i, &j);

    if (j==0){
        printf("You cannot divide the number by 0\n");
        return 0;
    }
    printf("The valud of %lf divided by %lf = %lf\n", i, j, i/j);

    printf("Return value of scanf : %d\n", num_return_scanf);
    return 0;
}