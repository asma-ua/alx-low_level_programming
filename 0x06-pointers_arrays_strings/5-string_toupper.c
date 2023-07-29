#include "main.h"
/**
*string_toupper-  function to concatinate two strings
*
*@str: the inputed pointer of array
*
*Return: return the length of the array
*/
char *string_toupper(char *str)
{
char *p = str;
while (*p)
{
if (*p >= 'a' && *p <= 'z')
{
*p = *p - ('a' - 'A');
}
p++;
}
return (str);
}
