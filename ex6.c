#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 200;
    float power  = 2.345f;
    double super_power = 56342.3;
    char initial = 'F';
    char first_name[] = "Antony";
    char last_name[] = "Sastre";
    char empty[] = "";

    printf("You are %d miles away.\n", distance);
    printf("You have %f level of power.\n", power);
    printf("You have %f awesome super power.\n", super_power);
    printf("I have an initial wich is %c.\n", initial);
    printf("I have a first name %s.\n", first_name);
    printf("I have a last name %s.\n", last_name);
    printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);
    printf("Empty string %s\n", empty);

    return 0;
}
