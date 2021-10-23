#include <stdio.h>

int main(){
    int m,n;
    //input dimension
    printf("Enter Metric Dimension(m<=1 and n<=3) : "); scanf("%d %d",&m,&n);
    int metric1[m][n];
    int metric2[m][n];
    int sum[m][n];
    //enter number to metric
    //metric1
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&metric1[i][j]);
        }
    }
    //metric2
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&metric2[i][j]);
        }
    }
    //metric1 + metric2
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            sum[i][j] = metric1[i][j] + metric2[i][j];
        }
    }

    //print result
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
