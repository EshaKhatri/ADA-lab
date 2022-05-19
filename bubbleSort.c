#include<stdio.h>

int main(){
    int i,j,n,temp;
    
    printf ("Enter the number of elements in the array : ");
    scanf ("%d", &n);
    int arr[n];
    printf ("\nEnter array elements : ");
    for (int i = 0; i < n; i++)
    {
      scanf ("\n%d", &arr[i]);
    }
    
    printf("Sorting..");
    
    for(i=0;i<n-1;i++){
        for (j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    printf("Sorted array is : ");
    for (int i = 0; i < n; i++)
    {
      printf("\n%d",arr[i]);
    }
    return 0;
}
