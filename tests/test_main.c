#include "main.h"

int main() {
  int numbers[2];
  int res;

  res = read_dims(&numbers[0]);
  if(numbers[0] != 16)
    printf("ERROR: numbers[0] != 16\n");
  if(numbers[1] != 14)
    printf("ERROR: numbers[1] != 14\n");
  printf(" -- TESTS (PASSING) --\n");
  return 0;
}
