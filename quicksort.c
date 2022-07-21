#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 100000
void quicksort(int number[],int first,int last){
   int i, j, pivot, temp;
   if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
         i++;
         while(number[j]>number[pivot])
         j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);
   }
}
int main(){
   
    srand(time(0));
    while(1){
   int i, count, number[size];
   clock_t start,end;
   double t_t;
   char ch ;
   printf("\nHow many elements are u going to enter?: ");
   scanf("%d",&count);
   for(i=0;i<count;i++)
  number[i]=rand();
  start=clock();
   quicksort(number,0,count-1);
   end=clock();
   t_t=(end-start)/(double)CLOCKS_PER_SEC*1000;
   printf("\ntime taken for %d elements is %lf",count,t_t);
   printf("\nDo you wanna continue : y or n ");
   scanf("\n%c",&ch);
   if(ch=='n'|ch=='N'){
       exit(0);
   }
    }
   return 0;
}
