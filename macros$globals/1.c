#include <stdio.h>

#define PI 3.23232

#define AREA(r) (PI * r * r)

#ifndef radius 
#define radius 7 
#endif 

#if radius > 10
#define radius 10 
#elif radius < 5

#define radius 5 

#else radius 7 

#endif

int main() {
  return 0;
}