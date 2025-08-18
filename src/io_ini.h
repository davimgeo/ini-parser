#ifndef IO_INI_H
#define IO_INI_H

#include <stdio.h>

typedef struct
{
  char*  arr;
  size_t len;
} file_data;

file_data* read_parameters_file(const char *path);

#endif /* IO_INI_H */
