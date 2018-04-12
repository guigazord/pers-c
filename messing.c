#include <stdio.h>

//variables section
int num_bunny, num_deer, num_total, num_prey;       //declaration of integer var 'x'

int main() {

  //basic input and outputs and variable functioning

  printf ("Hunter simulator v.1.0\n\nWin+left or win+right to colapse the window!\n\n"
          "+---+---+---+---+---+---+---+---+---+\n\nHello hunter! (enter to continue)");   //prints welcoming to the screen
  getchar();

  printf ("\nHow many bunnies do you see? (enter a positive integer number) ");   //prints instruction to the screen
  scanf ("%i", &num_bunny);   //scans input as digit; stores in variable

  //if else statements
  if (num_bunny == 0) {
    printf ("Somebody's not going to eat today...");   //outputs string with input
  } else if (num_bunny == 1){
    printf ("%i bunny guy chilling under a tree...", num_bunny);
  } else if (num_bunny > 1 && num_bunny <= 10) {
    printf ("%i little bunnies jumping on the grove.", num_bunny);   //outputs string with input
  } else {
    printf ("Wow!!! These damn bunnies spread soo quickly!");
  }

  getchar();   //waits non specified character input
  printf ("\n\nAnd how many deers do you see? (enter a positive integer number) ");
  scanf ("%i", &num_deer);

  if (num_deer == 0) {
    printf ("These are hard times...");
  } else if (num_deer == 1) {
    printf ("%i single deer, oh oh.", num_deer);
  } else if (num_deer > 0 && num_deer <= 5) {
    printf ("I think %i deers are just enough.", num_deer);
  } else {
    printf ("Holy Cow! This wilderness is huge!");
  }

  getchar();
  printf ("\n\nLets count the total amount of animals together! (enter to continue)");
  getchar();
  printf ("\nNumber of bunnies:\n");

  //for loops
  for (int wai = 1; wai <= num_bunny; wai++) {
    printf ("%i\n", wai);
  }

  printf("\n(enter to continue)");
  getchar();
  printf ("\nNumber of deers:\n");

  for (int jay = 1; jay <= num_deer; jay++) {
    printf ("%i\n", jay);
  }

  num_total = (num_bunny + num_deer);
  printf ("\n%i animals in the jungle!", num_total);

  //while loop
  printf ("\n\nOk, how many preys you'll hunt today?\n(enter a positive integer number) ");
  scanf ("%d", &num_prey);

  if (num_prey == 0) {
    while (num_prey == 0) {
      printf ("\nYou have to hunt at least one animal...\nTry again: ");
      scanf ("%d", &num_prey);
    }
    printf("\nNice! Now we can now make some meal!");
  } else if (num_prey == 1) {
    printf ("\nYep, %d prey feels just fine...", num_prey);
  } else if (num_prey > 1 && num_prey <= num_total) {
    printf ("\nHmm, seems like we're having a feast tonight with these %d hunts!", num_prey);
  } else {
    while (num_prey > num_total) {
      printf ("\nMake shure you are not exceeding the number of animals.\nTry again: ");
      scanf ("%d", &num_prey);
    }
    printf("\nNice! Now we can now make some meal!");
  }

  getchar();

  return 0;   //program successfully ('0') finished
}
