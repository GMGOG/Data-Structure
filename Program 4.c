#include<stdio.h>
void ToMerge(int*,int,int*,int);
void main()
{
  int N1,N2,arr1[20],arr2[20];
  printf("Enter the number of elements for arr1: ");
  scanf("%d",&N1);
  printf("Enter the elements of array 1: ");
  for(int i=0;i<N1;i++)
  scanf("%d",&arr1[i]);
  printf("Enter the number of elements for arr2: ");
  scanf("%d",&N2);
  printf("Enter the elements of array 2: ");
  for(int i=0;i<N2;i++)
  scanf("%d",&arr2[i]);
  ToMerge(arr1,N1,arr2,N2);
  printf("\nList after merging: \n");
  for(int i=0;i<N1+N2;i++)
  printf("\t %d",arr1[i]);
}
void ToMerge(int* add1,int N1,int* add2,int N2)
{
  add1+=N1;
  for(int i=0;i<N2;i++)
  *(add1+i)=*(add2+i);
}
