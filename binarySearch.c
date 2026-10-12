#include<stdio.h>

int binarysearch(int arr[],int n, int target){
    int left=0, right=n-1;

    while(left<=right){
        int mid =(left+right)/2;
        if(arr[mid]==target){
            printf("Target found at %d", mid+1);
            return 0;
        }
        else if(arr[mid]<target){
            left=mid+1;
        }
        else    right=mid-1;
    }
    printf("Target not found.");
    return 0;
}
int main(){
    int n=10;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int target=7;
    binarysearch(arr,n,target);
}