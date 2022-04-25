#include "main.h"

/**
* leet - a function that encodes a string into 1337
*
* @s: string input
*
* Return: @s
*/

char *leet(char *s)
{
int count = 0, i;
int low_letters[] = {97, 101, 111, 116, 108};
int upp_letters[] = {65, 69, 79, 84, 76};
int numbers[] = {52, 51, 48, 55, 49};

/**
*while (s[c] != '\0')
*{
* loop through array value five times
* to check if the value is equal to
* any small letter in array sl or
* upper letter in array ul and if it
* is replace it with the value in array n
*/
while (*(s + count) != '\0')
{
for (i = 0; i < 5; i++)
{
if (*(s + count) == low_letters[i] || *(s + count) == upp_letters[i])
{
*(s + count) = numbers[i];
break;
}
}
count++;
}
return (s);
}
