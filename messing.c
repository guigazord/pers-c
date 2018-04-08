#include <stdio.h>

//variables section
int num_bunny, num_deer;       //declaration of integer var 'x'

int main() {

  printf("Hello hunter!\n");   //prints welcoming to the screen
  printf("How many bunnies do you see? ");   //prints instruction to the screen
  scanf("%i", &num_bunny);   //scans input as digit; stores in variable

  if (num_bunny == 0) {
    printf ("Somebody's not going to eat today...");   //outputs string with input
  } else if (num_bunny > 0 && num_bunny <= 10) {
    printf ("%i little bunnies jumping on the grove.", num_bunny);   //outputs string with input
  } else {
    printf ("Wow!!! These damn bunnies spread soo quickly!");
  }

  getchar();   //waits non specified character input
  printf ("\nAnd how many deers do you see? ");
  scanf ("%i", &num_deer);

  if (num_deer == 0) {
    printf ("These are hard times...");
  } else if (num_deer > 0 && num_deer <= 5) {
    printf ("I think %i deers are just enough.", num_deer);
  } else {
    printf ("Holy Cow! This wilderness is huge!");
  }

  getchar();

  return 0;   //program successfully ('0') finished
}
