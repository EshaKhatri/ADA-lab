#include<stdio.h>

void
main ()
{
  int n, arr[20], key, y;
  printf ("Enter the number of elements in the array : ");
  scanf ("%d", &n);

  printf ("\nEnter array elements : ");
  for (int i = 0; i < n; i++)
    {
      scanf ("\n%d", &arr[i]);
    }

  printf ("\nEnter the integer you want to search");
  scanf ("\n%d", &key);

  for (int i = 0; i < n; i++)
    {
      if (arr[i] == key)
	y = 1;
      else
	y = 0;
    }
  if (y == 1)
    printf ("\nElement found");
  else
    printf ("\nElement not found");
}
