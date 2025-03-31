#include <stdio.h>

int main(){
  int x = 10; // here am declaring a valiable x with value of x which is an integer 
  int* ptr = &x; // here am creating a poter of type int and also assingin the address of x to be stored on that pointer 
  // remember that pointer stores the address of a memory 
  printf("Addrres at x: %p \n",ptr); // here am printing the address fo the memory
  printf("value of x: %d \n",*ptr); // here am printin the value stored in that memory by dereferencing 
}