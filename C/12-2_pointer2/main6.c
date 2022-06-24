#include <stdio.h>

//[] == *()

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    printf("a[3] : %d\n", arr[3]);
    printf("*(arr+3) : %d\n", *(arr+3));
    printf("3[arr] : %d\n", 3[arr]); // 3[arr] == *(3+arr)

    return 0;
}