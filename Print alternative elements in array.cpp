#include<stdio.h>
void print(int ar[], int n)
{
    for(int i=0;i<n;i+=2){
        printf("%d ",ar[i]);
    }
}
int main()
{
   int t;
   scanf("%d", &t);
   while(t--)
   {
     int ar[100001]={0};
     int n;
     scanf("%d", &n);
     for(int i=0;i<n;i++)
      scanf("%d", &ar[i]);
      print(ar,n);
      printf("\n");
     }
return 0;
}
