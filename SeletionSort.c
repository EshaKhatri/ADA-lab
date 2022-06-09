#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n-1; i++)
	{
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		swap(&arr[min_idx], &arr[i]);
	}
}

void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void main()
{  while(1){
    int n,ch;
    printf("\nenter the number of elements in the array\n");
    scanf("  %d",&n);
     int arr[n];
    for (int i = 0; i < n; i++)
    {
      arr[i] = (random()%1000);
    }
    printf("\nArray elements are : ");
    for (int i = 0; i < n; i++)
    {
      printf("\t%d",arr[i]);
    }
    clock_t end, start;
    start = clock();
	selectionSort(arr, n);
	end = clock();
    double time_taken = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Sorted array: \n");
    printf("\nLinear search took %f seconds to execute \n", time_taken);
	printArray(arr, n);
	printf("Press 1 if you wanna check for another array if not enter 0 :");
	scanf("%d",&ch);
	if(ch==0)
	exit(0);
}
}
