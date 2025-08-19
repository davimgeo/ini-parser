#include <stdio.h>
#include <stdlib.h>
#include "io_ini.h"

#define READ_ONLY "r"

file_data* read_parameters_file(const char *path)
{
  FILE* fptr = fopen(path, READ_ONLY);
  if (fptr == NULL) {
    perror("Failed to open file");
    return NULL;
  }

  file_data* data = malloc(sizeof(file_data));
  if (data == NULL) {
    perror("Memory allocation failed");
    fclose(fptr);
    return NULL;
  }

  fseek(fptr, 0, SEEK_END);
  data->len = ftell(fptr);
  fseek(fptr, 0, SEEK_SET);

  data->arr = malloc(data->len + 1);
  if (data->arr == NULL) {
    perror("Memory allocation failed");
    free(data);
    fclose(fptr);
    return NULL;
  }

  fread(data->arr, 1, data->len, fptr);
  data->arr[data->len] = '\0';

  fclose(fptr);
  return data; /* caller responsible for freeing data */
}

