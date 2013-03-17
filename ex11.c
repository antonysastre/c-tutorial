#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 1;
  while(i < argc) {
    printf("arg %d: %s\n", i, argv[i]);
    i++;
  }

  char *scandinavia[] = {
    "Sweden",
    "Norway",
    "Finland",
    "Denmark"
  };

  int scan_count = 4;
  i = 0; // watch for this
  while(i < scan_count) {
    printf("scandinavia %d: %s\n", i, scandinavia[i]);
    i++;
  }
}
