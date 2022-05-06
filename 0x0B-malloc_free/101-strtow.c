#include <stdlib.h>
#include "main.h"
/**
* strtow - splits a string into words
* @str: string of words to be split
* Return: no of strings
*/
int word_count(char *s)
{
int i, num = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (*s == ' ')
s++;
else
{
for (; s[i] != ' ' && s[i] != '\0'; i++)
s++;
num++;
}
}
return (num);
}
/*
* **strow - function that splits a string into words
*@str: string
*
*Return: pointer to an array of strings if success,
*Null otherwise
*/
char **strtow(char *str)
{
char **p, *temp;
int i, k = 0, len = 0, words, c = 0, start, end;

while (*(str + len))
len++;
words = words_count(str);
if (words == 0)
return (NULL);

p = (char **) malloc(sizeof(char *) * (words + 1));
if (p == NULL)
return (NULL);

for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
temp = (char *) malloc(sizeof(char) * (c + 1));

if (temp == NULL)
return (NULL);

while (start < end)
*temp++ = str[start++];
*temp = '\0';
p[k] = temp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
start = i;
}

p[k] = NULL;
return (p);
}
