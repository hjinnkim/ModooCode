#include <stdio.h>

//Char is also a numnber

int main(){
    char input;

    printf("Enter a character\n");
    printf("Alphabet : ");
    scanf("%c", &input);

    switch(input){
        case 'a':
            printf("a\n");
            break;
        case 'b':
            printf("b\n");
            break;
        case 'c':
            printf("c\n");
        default:
            printf("Cannot understannd your input....\n");
            break;
    }

    return 0;
}