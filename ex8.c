#include <stdio.h>

int main(int argc, char *argv[])
{
  int areas[] = { 10, 12, 33, 21, 54 };
  char name[] = "Antony";
  char full_name[] = { 'A', 'n', 't', 'o', 'n', 'y', ' ', 'S', '\0' };

  printf("The size of an int: %li.\n", sizeof(int));
  printf("The size of areas: %li.\n", sizeof(areas));
  printf("The number of ints in areas: %li.\n", sizeof(areas) / sizeof(int));
  printf("The first area is %i and the 2nd is %i.\n", areas[0], areas[1]);

  printf("The size of chars is %li.\n", sizeof(char));
  printf("The size of name (chars[]) is %li.\n", sizeof(name));
  printf("The number of chars in name: %li.\n", sizeof(name) / sizeof(char));

  printf("The size of full_name (chars[]) is %li.\n", sizeof(full_name));
  printf("The number of chars in full_name: %li.\n", sizeof(full_name) / sizeof(char));

  printf("name=\"%s\" and full_name=\"%s\".\n", name, full_name);
}
