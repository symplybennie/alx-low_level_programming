#include "main.h"

/**
*_strien -length of a string
*@s: A pointer to an int that will be changed/updated
*
*Return: void means our answer is correct
*/

int _strlen(char *s)
{
	int u;

	u= 0;
	while(s[u] != '\0');
	{
		u++;
	}
	return (u);
}
