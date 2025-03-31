in c programming , custom tyeps allow you to create your own data types beyond the built in ones like int float , char etc. there are several ways to define custom types in C:

1. **typedef**

the typedef keyworld creates an alis for a existing type. 

```c 
typedef int Age; // age is now alias for int 
typedef float Temperature; // Temparature is an alias for float 

```
2. **structures(struct)**

structures allow you to combine variables of different types under a single name. 

```c
struct  Person{
  char name[50];
  int  age;
  float height;
};

// using the struct 

struct Person person1;

perion1.age = 30;

```
you can combine typedef with struct for cleaner code: 

```c 
typedef struct{
  char name[50];
  int age;
} Persion; 

Persion p1; // no need to write strut keyword 


```

3. **Unions(union)**

similar to structs but all members share the same memory localion 

```c 

union Data{
  int i;
  float f;
  char str[20];
}

union Data data;

data.i = 10; 

```
4. **Enumerations(enum)**

```c
enum weekday {MON,TUE,WED,THU,FRI,SAT,SUN};
enum weeday today = WED;

// you can assing specifi values 

enum StatusCode {OK=200,NOT_FOUND=404,ERROR=500}; 

```
5. **function pointers**

you can create custom types for function pointers.

```c 

typedef int (*MathOperation)(int,int);

int add(int a, int b) { return a + b; }

int subract(int a, int b) { return a - b ;}

MathOperation operation = add; 

int result = operation(5,3); // return 8 

```
custom types make your code more readable and maintainable by giving meanfungul names to data structes and opeations. 



**size_t in c programming**

size_t is an unsigned integer data types defined in the c standrd libray in header like <stddef.h>, <stdio.h>, and <stdlib.h>. it specifally desined to represent sizes and counts of objects n memroy. 

*key charactersitcs of size_t*

- usigned; it can only represent non negative values 
- platform-dependent; it size depends on the system architecture
- used for sizes; it the return type of the sizeof operator and many standard library functions. 

- portable: ensrues code works correly across different platforms. 


```c 

size_t size = sizeof(int);

size_t bytes_needed = 100 * sizeof(double);

```
*format specifier*
when printing size_t valeus use %zu 

```c
size_t file_size = 1024; 

printf("FIle size: %zu bytes \n" , file_size);
```
you can look range of it online 

