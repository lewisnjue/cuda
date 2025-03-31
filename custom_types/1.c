#include <stdlib.h>
#include <stdio.h>
typedef struct 
{
  float x;
  float y;
} Point;

int main(){
  Point first = {2.0,4.3};
  printf("The size of Point is %zu bytes \n",sizeof(first));

  return 0;
}