#include <stdio.h>

//Problem 6

void another(){
    int a = 3, b = 2, c = 1;
	int numCount = 0;
    int oper=0;

	for (a = 1; a < 2000; a++) { 
		for (b = 1; a > b; b++) { /* a < 2000이므로 b, c < 2000 */
			for (c = 1; b > c; c++) {
                oper+=1;
				if (a + b + c == 2000) numCount++;
			}
		}
	}
	
	printf("식을 만족하는 자연수 a, b, c의 갯수는 %d 입니다. \n", numCount);

    printf("oper : %d\n", oper);
}

int main(){
    int a=2000, b=1, c=1, count=0, oper=0;

    printf("Problem6\n");

    while(a>b){
        for(c=b-1; c>0; c--){
            oper+=1;
            a=2000-b-c;
            if(a>b){
                count+=1;
                // printf("%d %d %d\n", a,b,c);
            }
        }
        b+=1;
    }
    printf("count : %d\n", count);
    printf("oper : %d\n", oper);

    printf("Another\n");
    another();

    return 0;
}

