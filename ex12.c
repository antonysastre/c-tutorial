#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  if (argc == 1) {
    printf("You dont't have any arguments, you suck.\n");
  } else if (argc > 1 && argc < 4) {
    printf("Here is your arguments:\n");
    for (i=1;i<argc;i++) {
      printf("%s ", argv[i]);
    }
    printf("\n");
  } else {
    printf("You have to many arguments, you suck.\n");
  }
}
