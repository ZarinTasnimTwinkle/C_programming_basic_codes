#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d", &n);
    int A[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j)
                A[i][j]=1;
            else
                A[i][j]=0;
          printf("%d", A[i][j]);
        }

        printf("\n");
    }

    return 0;
}
