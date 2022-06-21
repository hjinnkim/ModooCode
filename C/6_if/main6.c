#include <stdio.h>

// If the result of previous condition determines whole condition, the program don't need to check following conditions.
// Thus, remaining conditions are skipped
// Example, when height is 170
// Then, (height >= 180 && weight >= 90) is already determines when height >= 180 is checked, even we don't check the result of weight >= 90
// In this case, computers don't check following conditions for computational efficiency
// This process is called "Short Circuit Evaluation"

int main(){
    int height, weight;
    printf("Enter your height, weight : ");
    scanf("%d%d", &height, &weight);

    if (height >= 190 || weight >= 100) printf("You are 'big'\n");

    return 0;
}