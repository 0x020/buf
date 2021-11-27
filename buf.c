#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "buf.h"

void buffer(char* i) {
  char buf[8];
  strcpy(buf, i);
  printf("Input: %s\n", buf);
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage ./buf <input>\n");
    exit(EXIT_FAILURE);
  }

  buffer(argv[1]);

  printf("Not buffer overflow.\n");

  return 0;
}
