#include "main.h"
/**
*_strcat -  function to concatinate two strings
*
*@dest: the inputed pointer of array
*@src: the inputed pointer of array
*
*Return: return the length of the array
*/
char *_strcat(char *dest, char *src)
{
char *p = dest;
while (*p)
{
p++;
}
while (*src)
{
*p++ = *src++;
}
*p = '\0';
return (dest);
}
