#include <stdio.h>

void swap(int *a , int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
  
}


int partition(int arr[] , int n , int l , int h)
{
  int pivot = arr[l];
  int i = l;
  int j = h;

  while( i<j)
  {
      while(arr[i] <= pivot){
        i++;
      }
    while(arr[j]>pivot){
      j++;
    }

    swap(&arr[i] , &arr[j]);
   }

  swap(&pivot , &arr[j]);
  return j;
}

int quicksort(int arr[] , int n , int l , int h){
  if( l< h)
  {
    int j = partition(arr,n,l,h);
    quicksort(arr,n,l,j);
    quicksort(arr,n,j+1,h);
  }
}

void print(int arr[] , int n)
{
  for(int i = 0 ; i<n; i++)
    {
      printf("%d " , arr[i]);
    }
}

int main() {

  int n;
  printf("enter size");
  scanf("%d" , &n);
  int arr[n];

  printf("enter the array ");
  for(int i = 0 ; i<n ; i++)
   {
      scanf("%d",&arr[i]);
    }
  int l = 0;
  int h = n-1;
  
  quicksort(arr,n,l,h);
  print(arr,n);
  
  
  return 0;
}