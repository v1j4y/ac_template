#include "utils.h"

int read_dims(int *numbers) {
  FILE *data_file;
  data_file = fopen("data/dims.txt","r");
  fscanf(data_file, "%2d,", &numbers[0]);
  fscanf(data_file, "%2d,", &numbers[1]);
  return 0;
}

