#include<stdio.h>
int ToDelete(int*,int,int);
void main()
{
  int N,index;
  int arr[10];
  printf("Enter the number of elements(1-10): ");
  scanf("%d",&N);
  printf("Enter elements: \n");
  for(int i=0;i<N;i++)
  scanf("%d",&arr[i]);
  printf("Enter the index @ which you want to delete an element");
  scanf("%d",&index);
  printf("\nElement Deleted %d",ToDelete(arr,index,N));
  for(int i;i<(N-1);i++)
  printf("\t %d",arr[i]);
}
int ToDelete(int * add,int ind,int N)
{
  int element=*(add+ind);
  for(int i=ind;i<N;i++)
    *(add+i)=*(add+i+1);
    return element;
}
