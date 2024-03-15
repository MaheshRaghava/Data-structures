
#include<stdio.h>
void read(int a[],int n)
{
  for(int i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
}
  void print(int a[],int n){
  for(int i=0;i<n;i++)
{
  printf("%4d",a[i]);
}
}
  void swap(int*a,int*b)
{
  int temp=*a;
        *a=*b;
        *b=temp;
}
  void sort(int a[],int n)
  {
    int i,j,min_idx;
    for(i=0;i<n-1;i++)
    {
      min_idx=i;
      for(j=i+1;j<n;j++)
      {
         if(a[j]<a[min_idx])
      {
      min_idx=j;
      }
      }
      swap(&a[min_idx],&a[i]);
    }
  }
  int main()
  {
  int n;
  printf("enter the number of elements\n");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements\n");
  read(a,n);
  sort(a,n);
  print(a,n);
  }
