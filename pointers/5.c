#include <stdio.h>

int main(){
  int a[] = {1,2,3,4};
  int b[] = {5,6,7,8};
  int* aptr = &a;
  int* bptr = &b;
  int* matrix[] = {aptr,bptr};
  for(int i = 0; i < 2; i++){ // this is like the batch dimenstion 
    for(int j = 0; j < 4; j++){ // this is like the time dimenstion 
      printf("value: %d ",*matrix[i]++);

    }
    printf("\n");
  }
  return 0;
}