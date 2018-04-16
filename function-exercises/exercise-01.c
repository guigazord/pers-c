#include <stdio.h>

//basic structure of a function in C.

//defining variables
int x, y;

//defining prototype of "add_2" function
int add_2 (int num_01, int num_02);

int main() {

  printf("Enter 2 integer numbers:\n"); //request data entry
  scanf("%i", &x); //scans input 01
  scanf("%i", &y); //scans input 02
  printf("%i + %i = %i", x, y, add_2(x, y));

  return 0;
}

//function 'add_2' definition
int add_2(int num_01, int num_02) {

  return (num_01 + num_02); //returns addition of 2 integer numbers
}
