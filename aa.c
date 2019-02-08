#include <stdio.h>
void ToInsert(int*,int*,int*);
int main()
{
  int E,ind;
  int Arr[8]={1,2,3,4,5};
  printf("Enter Element you want to insert: ");
  scanf("%d",&E);
  printf("\nAt(0-4): ");
  scanf("%d",&ind);
  ToInsert(Arr,&E,&ind);
  return 0;
}
void ToInsert(int* add,int* E,int*ind)
{
  printf("Elements before insertion are: \n");
  for(int i=0;i<5;i++)
    printf("%d \t",*(add+i));
  for(int i=4;i>=ind;i--)
  *(add+i+1)=*(add+i);
  *(add+ind)=*E;
  printf("\n\nElement %d %s %d %s",*(add+*ind)," inserted at position " ,*ind,"\n");
  printf("\nelements after insertion are: \n");
  for(int i=0;i<6;i++)
    printf("%d \t",*(add+i));
}
