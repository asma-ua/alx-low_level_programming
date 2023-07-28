#include "main.h"
/**
*_strncpy -  function to concatinate two strings
*
*@dest: the inputed pointer of array
*@src: the inputed pointer of array
*@n: the inputed pointer of array
*
*Return: return the length of the array
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
