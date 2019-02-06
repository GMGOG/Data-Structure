#include<stdio.h>
void ToStore(int*,int);
void ToShow(int*,int);
int i;
int main()
{
  int N,E[10];
  printf("Enter Number of Elements you want to Enter. (1-10)\n");
  scanf("%d",&N);
  printf("\nEnter the Elements: ");
  ToStore(E,N);
  ToShow(E,N);
  return 0;
}
void ToStore(int* adr,int N)
{
  for(i=0;i<N;i++)
  scanf("%d",(adr+i));
}
void ToShow(int* adr,int N)
{
  for(i=0;i<N;i++)
  {printf("%d \t",*(adr+i));}
}
