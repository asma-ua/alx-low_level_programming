#include "main.h"
/**
*_strncat -  function to concatinate two strings
*
*@dest: the inputed pointer of array
*@src: the inputed pointer of array
*@n: the inputed pointer of array
*
*Return: return the length of the array
*/
char *_strncat(char *dest, char *src, int n)
{
int a = 0;
char *p = dest;
while (*p)
{
p++;
}
while (a < n)
{
if (*src)
{
*p++ = *src++;
a++;
}
else
a++;
}
*p = '\0';
return (dest);
}
