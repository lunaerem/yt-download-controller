// Code for handling file I/O
#include "fio.h"
#include <errno.h>
#include <unistd.h>

int fcheck(const char *fname) {

  if (access(fname, F_OK) != 0) {
    if (errno != ENOENT) {
      // Unknown error
      return -1;
    } else {
      // File not found error
      return -2;
    }
  }

  // Success
  return 0;
}
