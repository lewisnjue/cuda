#include <stdio.h>

int main(){
  int first = 40;
  float second = 32.23;
  void* ptr = &first; // here am storing the address of first in void pointer 
  printf("The value of first is : %d \n",*(int*)ptr);
  ptr = &second;
  printf("The value of second is:%f \n",*(float*)ptr);
  // void pointer allow us to do some kind of polymophisim you can think of it like that 
}