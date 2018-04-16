#include <stdio.h>

int x;

int square_num(int num_sqr);

int main() {

  printf("Enter a number to be squared: ");
  scanf("%i", &x);
  printf("%i squared is equals to: %i", x, square_num(x));

  return 0;
}

int square_num(int num_sqr) {

  return (num_sqr * num_sqr);
}
