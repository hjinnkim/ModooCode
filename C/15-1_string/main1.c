#include <stdio.h>

// Null

int main(){
    char null_1 = '\0';
    char null_2 = 0;
    char null_3 = NULL;
    char null_4 = (char)NULL;

    char not_null = '0';

    printf("NULL integer(ASCII) value : %d %d %d %d\n", null_1, null_2, null_3, null_4);

    printf("Not NULL value : %d\n", not_null);

    return 0;
}