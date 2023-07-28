#include "main.h"
/**
*reverse_array -  function to concatinate two strings
*
*@a: the inputed pointer of array
*@n: the inputed pointer of array
*
*Return: return the length of the array
*/
void reverse_array(int *a, int n)
{
int i, sav;
for (i = 0; i < n / 2; i++)
{
sav = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = sav;
}
}
