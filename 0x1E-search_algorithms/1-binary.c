#include <stdio.h>
#include <stdlib.h>
/**
 *binary_search - searches for a value in array using binary search algorithm
 *@array:  pointer to integer [start of array]
 *@size: number of elements in the array
 *@value: element to search for
 *Return: index of located value or -1
 */
int binary_search(int *array, size_t size, int value)
{
int left = 0, right = size - 1;
int middle, i;

if (array == NULL)
return (-1);
while (left <= right)
{
printf("Searching in array: ");
for (i = left;  i < right; i++)
printf("%d, ", array[i]);
printf("%d\n", array[right]);
middle = (left + right) / 2;
if (value == array[middle])
{
return (middle);
}
else if (value < array[middle])
right = middle - 1;
else
left = middle + 1;
}
return (-1);
}
