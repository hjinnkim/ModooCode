#include <stdio.h>
typedef struct SENSOR {
  int sensor_flag;
  int data;
} SENSOR;

int main() {
//   volatile SENSOR *sensor;
//   /* 값이 감지되지 않는 동안 계속 무한 루프를 돈다*/
//   while (!(sensor->sensor_flag)) {
//   }
//   // volatile makes it not be opimized. Because it informs *sensor can be changed during program to compiler. 
//   printf("Data : %d \n", sensor->data);

  return 0;
}