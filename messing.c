#include <stdio.h>

//variables section

int num_1;       //declaration of integer var 'x'

int main() {

  printf("Hello!\n");   //prints welcoming to the screen
  printf("Type an integer number: ");   //prints instruction to the screen
  scanf("%i", &num_1);   //scans input as digit; stores in variable
  printf("%i little bunnies jumping on the grove...", num_1);   //outputs string with input
  getchar();   //waits non specified character input

  return 0;   //program successfully ('0') finished
}
