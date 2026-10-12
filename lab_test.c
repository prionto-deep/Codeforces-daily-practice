#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n],prefix_sum[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int st, end;
    scanf("%d %d",&st, &end);
    int sum=0;
    for(int j=st-1; j<end; j++){
        sum+=arr[j];
        prefix_sum[j]=sum;
        printf("%d\n", sum);
    }
}