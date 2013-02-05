#include <stdio.h>

#include "printf.h"

int main(void) {
  char buf[64];

  int ret = tfp_snprintf(buf, sizeof(buf), "foobar: %d\n", 2);
  fprintf(stdout, "ret: %d, string: %s\n", ret, buf);
  ret = tfp_snprintf(buf, sizeof(buf), "foobar: %d|\n", 2);
  fprintf(stdout, "ret: %d, string: %s\n", ret, buf);
  ret = tfp_snprintf(buf, 4, "foobar: %d|\n", 2);
  fprintf(stdout, "ret: %d, string: %s\n", ret, buf);

  return 0;
  
}
