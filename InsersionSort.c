#include<stdio.h>
void insersionSort(int arr[],int n){
    if(n==1)
        return;
    for(int i=0; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j]<arr[j-1]){
                int t=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=t;
            }
            else{
                break;
            }
        }
    }
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    // for(int i=0; i<n; i++){
    //     printf("%d ",arr[i]);
    // }
    printf("\n");
    insersionSort(arr,n);
    for(int k=0; k<n; k++){
        printf("%d ",arr[k]);
    }
}