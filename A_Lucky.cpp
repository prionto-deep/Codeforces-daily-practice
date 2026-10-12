#include<iostream>
using namespace std;

int main(){
    int loop;
    cin >> loop;
    while(loop--){
        int input;
        cin >> input;
        int arr[6];
        for(int i=0; i<6; i++){
            arr[i]=input%10;
            input/=10;
        }
        // for(int i=0; i<6; i++){
        //     printf("%d ",arr[i]);
        // }
        // return 0;
        int sum1=0, sum2=0;
        for(int i=0; i<3; i++){
            sum1+=arr[i];
        }
        for(int i=3; i<6; i++){
            sum2+=arr[i];
        }
        cout<< (sum1==sum2? "YES\n" :"NO\n");
    }
}