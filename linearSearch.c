#include<stdio.h>
#include<time.h>
void search(){
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

void
main ()
{
   clock_t t;
    t = clock();
    search();
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("\nsearch() took %f seconds to execute \n", time_taken);
}
