#include <stdio.h>
void printNos(int N)
{
    for(int i=1;i<=N;i++){
        printf("%d ",i);
    }
}
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        int N;
        scanf("%d", &N);
        printNos(N);
        printf("\n");
    }
    return 0;
}
