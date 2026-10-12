#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int row, colum; cin >> row >>colum;
    int total=row*colum;
    int count=0;
    // if(row==1 || colum==1){
    //     cout <<"Akshat";
    //     return 0;
    // }
    // while(total>0){
    //     total-=row+colum-2;
    //     row--;  colum--;
    //     count++;
    // }

    cout <<(min(row,colum)%2==0?"Malvika":"Akshat");
}