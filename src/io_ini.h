#infndef IO_INI_H
#define IO_INI_H

#include <stdio.h>
 
typedef struct waveletPar 
{
  int   nt   = 1001;
  float dt   = 4e-3;
  int   fmax = 10;
} wavelet;

FILE* read_f32_bin_model(const char *path);

#endif /* IO_INI_H */
