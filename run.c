#include <stdio.h>
#include <stdlib.h>

#include "src/io_ini.h"

#define PATH "config/parameters.ini"

int main(void)
{
  file_data *data = read_parameters_file(PATH);

  printf("File length: %d\nFile contents:\n%s\n", data->len, data->arr);

  free(data->arr);
  return 0;
}

