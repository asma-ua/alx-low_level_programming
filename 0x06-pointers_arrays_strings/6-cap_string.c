#include "main.h"
/**
*cap_string -  function to concatinate two strings
*
*@str: the inputed pointer of array
*
*Return: return the length of the array
*/
char *cap_string(char *str)
{
char *p = str;
int cap = 1;
while (*p)
{
if (*p == ' ' || *p == '\t' || *p == '\n' || *p == ','
|| *p == ';' || *p == '.' ||
*p == '!' || *p == '?' || *p == '"' || *p ==
'(' || *p == ')' || *p == '{' || *p == '}')
{
cap = 1;
}
else if (cap)
{
if (*p >= 'a' && *p <= 'z')
{
*p -= ('a' - 'A');
}
cap = 0;
}
p++;
}
return (str);
}
