#include <stdio.h> // the library that contain what i will use 

int main(){
  int arry[] = {20,40,50,40,20};
  int* ptr = &arry; // this will store the memory address fo teh first element in the list 
  printf("THE INIAL VALUE POINTED BY OUR POINTER IS  OF THE POINTER IS: %d \n",*ptr);
  for(int i = 0; i < 5; i++){
    printf("value: %d \n",*ptr);
    ptr++; // increase the pointer 
  }
  return 0;
}