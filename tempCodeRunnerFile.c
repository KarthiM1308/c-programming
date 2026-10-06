#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr1[n][n],arr2[n][n],arr3[n][n];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr2[i][j]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    }}}
