#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("----\n");

  // create to arrays we care about
  int ages[] = { 18, 20, 25, 30, 35 };
  char *names[] = {
    "John", "Antony",
    "Gina", "Lova", "James"
  };

  // safely get the sizes of ages
  int count = sizeof(ages) / sizeof(int);
  int i;

  // first way using indexing
  for (i=0;i<count;i++) {
    printf("%s has %d years alive.\n",
        names[i], ages[i]);
  }

  printf("----\n");

  // setup the pointers to the start of the arrays
  int *cur_age    = ages;
  char **cur_name = names;

  // second way using pointers
  for (i=0;i<count;i++) {
    printf("%s is %d years old.\n",
        *(cur_name+i), *(cur_age+i));
  }

  printf("----\n");

  // third way, pointers a just arrays
  for (i=0; i < count; i++) {
    printf("%s is %d years old again.\n",
        cur_name[i], cur_age[i]);
  }

  printf("----\n");

  // fourth way, with pointers in a stupid and cumbersome way
  for (cur_name = names, cur_age = ages;
        (cur_age - ages) < count;
        cur_name++, cur_age++) {

    printf("%s lived %d years so far.\n",
        *cur_name, *cur_age);
  }
  return 0;
}
