#include <stdio.h>
int main(){
  // here am just using pointer to pointer to pointer you get the ideal 
  int value = 42;
  int* ptr1 = &value;
  int** ptr2 = &ptr1;
  int*** ptr3 = &ptr2;
  printf("Value: %d \n",***ptr3);
}