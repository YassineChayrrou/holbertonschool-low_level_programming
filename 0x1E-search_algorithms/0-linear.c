#include <stdio.h>
/**
 *linear_search - searches array of integers using Linear Search
 *@array:  pointer to integer [start of array]
 *@size: number of elements in the array
 *@value: element to search for
 *Return: index of located value or -1
 */
int linear_search(int *array, size_t size, int value)
{
int i;

if (array == NULL)
return (-1);
for (i = 0; (size_t)i < size; ++i)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
