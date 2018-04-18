#include <stdio.h>

int input;

//function prototype
void draw_menu();

int main() {

  draw_menu();
  printf("\nInput: ");
  scanf("%i", &input);
  switch (input) {
    case 1:
      printf("Game starting...");
      break;
    case 2:
      printf("Game loading...");
      break;
    case 3:
      printf("Loading options...");
      break;
    case 4:
      printf("Program finalized.");
      break;
    default:
      printf("There is no such input. Ending Program...");
      break;
  }

  return 0;
}

void draw_menu() {

  printf("Coin Gatherer v 1.0\n\n");
  printf("1. start game\n");
  printf("2. load game\n");
  printf("3. options\n");
  printf("4. quit game\n");
}
