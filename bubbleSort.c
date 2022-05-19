#include<stdio.h>
#include<time.h>

void sort(){
    int i,j,n,temp;
    
    printf ("Enter the number of elements in the array : ");
    scanf ("%d", &n);
    int arr[n];
    printf ("\nEnter array elements : ");
    for (int i = 0; i < n; i++)
    {
      scanf ("\n%d", &arr[i]);
    }
    
    printf("\nSorting..");
    
    for(i=0;i<n-1;i++){
        for (j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    printf("\nSorted array is : ");
    for (int i = 0; i < n; i++)
    {
      printf("\n%d",arr[i]);
    }
}

int main(){
    clock_t t;
    t = clock();
    sort();
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("\nsort() took %f seconds to execute \n", time_taken);
}
