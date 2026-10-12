#include<stdio.h>
#include<string.h>

void findSubsequence(char str[], char target[], int n, int m){
    for(int i=0; i<n; i++){
        int k=0;
        for(int j=i; j<n; j++){
            if(str[j]==target[k])
                k++;
            if(k==m){
                printf("Found\n");
                return;
            }
        }
    }
    printf("Not Found\n");
    return;
}
int main(){
    char str[]="abydfheg";
    char target[]="aby";
    char target2[]="";
    int n=strlen(str);
    int m=strlen(target);

    findSubsequence(str,target,n,m);
}