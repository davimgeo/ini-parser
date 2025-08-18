#include <stdio.h>

#include "src/io_ini.h"

#define PATH "config/parameters.ini"

int main(void)
{
   FILE* data = read_f32_bin_model(PATH);
}
