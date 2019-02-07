#include <stdio.h>
void ToInsert(int*,int*,int*);
int main()
{
  int E,ind;
  int Arr[5]={0,0,0,0,0};
  printf("Enter Element you want to insert: ");
  scanf("%d",&E);
  printf("\nAt(0-4): ");
  scanf("%d",&ind);
  ToInsert(Arr,&E,&ind);
  return 0;
}
void ToInsert(int* add,int* E,int*ind)
{
  *(add+*ind)=*E;
  printf("Element %d %s %d %s",*(add+*ind)," inserted at position " ,*ind,"\n");
  printf("elemts after insertion are: \n");
  for(int i=0;i<5;i++)
    printf("%d \t",*(add+i));
}
