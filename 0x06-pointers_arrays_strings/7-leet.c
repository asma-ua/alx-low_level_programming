#include "main.h"
/**
*leet -  function to concatinate two strings
*
*@str: the inputed pointer of array
*
*Return: return the length of the array
*/
char *leet(char *str)
{
int i;
int c;
char *s = str;
for (i = 0; s[i] != '\0'; i++)
{
c = s[i];
if (c == 'a' || c == 'A')
str[i] = '4';
else if (c == 'e' || c == 'E')
str[i] = '3';
else if (c == 'o' || c == 'O')
str[i] = '0';
else if (c == 't' || c == 'T')
str[i] = '7';
else if (c == 'l' || c == 'L')
str[i] = '1';
}
return (str);
}
