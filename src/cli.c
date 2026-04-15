#include "legacy.h"
#include <stdio.h>
#include <unistd.h>

#define VERSION "0.1.0"

int main(int argc, char *argv[]) {

  int opt;
  int rv = 0;

  // Checking that there is at least one argument
  if (argc < 2) {
    fprintf(stderr, "Usage error: At least one argument must be given. See "
                    "direct-dlp -h for details.\n");
    return -1;
  }

  // Checking through the arguments
  while ((opt = getopt(argc, argv, "vhld:")) != -1) {
    switch (opt) {
    case 'v':
      printf("direct-dlp version: %s\n", VERSION);
      break;
    case 'l':
      rv = legacyui();
      break;
    case 'd':
      printf("Download: %s\n", optarg);
      fprintf(stderr, "Currently not implemented yet, sorry.\n");
      break;
    case 'h':
      printf("Help\n");
      fprintf(stderr, "Currently not implemented yet, sorry.\n");
      break;
    case '?':
      break;
    }
  }

  return rv;
}
