#include "main.h"
#include <stdio.h>

/**
*_strien -length of a string
*@s: A pointer to an int that will be changed/updated
*
*Return: void means our answer is correct
*/

int _strlen(char *s)
{
int count = 0;

for (; *s != '\0'; s++)
{
count++;
}
return (count);
}
