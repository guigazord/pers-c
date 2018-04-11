#include <stdio.h>

//variables section
int num_bunny, num_deer, num_total;       //declaration of integer var 'x'

int main() {

  //basic input and outputs and variable functioning

  printf("Hello hunter!\nFor a better experience press win+left or win+right to colapse the window!\n");   //prints welcoming to the screen
  getchar();
  printf("How many bunnies do you see? ");   //prints instruction to the screen
  scanf("%i", &num_bunny);   //scans input as digit; stores in variable

  //if else statements
  if (num_bunny == 0) {
    printf ("Somebody's not going to eat today...");   //outputs string with input
  } else if (num_bunny > 0 && num_bunny <= 10) {
    printf ("%i little bunnies jumping on the grove.", num_bunny);   //outputs string with input
  } else {
    printf ("Wow!!! These damn bunnies spread soo quickly!");
  }

  getchar();   //waits non specified character input
  printf ("\n\nAnd how many deers do you see? ");
  scanf ("%i", &num_deer);

  if (num_deer == 0) {
    printf ("These are hard times...");
  } else if (num_deer > 0 && num_deer <= 5) {
    printf ("I think %i deers are just enough.", num_deer);
  } else {
    printf ("Holy Cow! This wilderness is huge!");
  }

  getchar();
  printf("\n\nLets count the total amount of animals together!");
  getchar();
  printf("\nTotal of bunnies:\n");

  //for loops
  for (int wai = 1; wai <= num_bunny; wai++) {
    printf ("%i\n", wai);
  }

  getchar();
  printf("Total of deers:\n");

  for (int jay = 1; jay <= num_deer; jay++) {
    printf("%i\n", jay);
  }

  num_total = (num_bunny + num_deer);
  printf("\nThat escalated quickly! %i animals in the jungle!", num_total);

  return 0;   //program successfully ('0') finished
}
