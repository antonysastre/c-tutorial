#include <stdio.h>

int main(int argc, char *argv[])
{
  int ages[1];
  char initials[1];

  int *agep;


  printf("sizeof (int): %lu\n", sizeof(int));
  printf("sizeof (char): %lu\n", sizeof(char));

  printf("sizeof (int[1]) ages: %lu\n", sizeof(ages));
  printf("sizeof (char[1]) initials: %lu\n", sizeof(initials));

  printf("sizeof *(int) agep: %lu\n", sizeof(agep));
  printf("adress of pointer *agep: %p\n", agep);
  printf("adress of ages: %p\n", &ages);
  printf("adress of pointer *agep + 1: %p\n", agep+1);

  return 0;
}
