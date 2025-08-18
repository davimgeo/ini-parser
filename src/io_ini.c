#include <stdio.h>
#include <stdlib.h>

#include "io_ini.h"

FILE* read_f32_bin_model(const char *path)
{
  FILE *data = fopen(path, "r"); 
  if (data == NULL) {
      printf("Model file could not be opened\n");
      return NULL;
    }

  fclose(data);  
  return data;
}




