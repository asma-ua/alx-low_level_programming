#include "main.h"
/**
*_strcmp -  function to concatinate two strings
*
*@s1: the inputed pointer of array
*@s2: the inputed pointer of array
*
*Return: return the length of the array
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && (*s1 == *s2))
{
s1++;
s2++;
}
return ((*s1) -(*s2));
}
