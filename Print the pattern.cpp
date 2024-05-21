#include<stdio.h>
void printPat(int n);
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n;
	scanf("%d",&n);
    printPat(n);
    printf("\n");
	}
}
void printPat(int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n-i;k++){
                printf("%d ",n-j);
            }
        }
        printf("$");
    }
}
