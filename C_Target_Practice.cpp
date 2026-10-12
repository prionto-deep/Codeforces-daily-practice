#include<iostream>
#include<vector>
using namespace std;
void func(){

    int rows=10, cols=10;
    
     vector<vector<char>> input(rows, vector<char>(cols));
    
     for(int i=0; i<10; i++){
         for(int j=0; j<10; j++){
             cin >> input[i][j];
         }
     }
     int sum=0;
     for(int i=0; i<10; i++){
         for(int j=0; j<10; j++){
             if(input[i][j]=='X'){
                int trash1=i+1, trash2=j+1;
                if(trash1>5)    trash1=11-trash1;
                if(trash2>5)    trash2=11-trash2;
                    sum+=min(trash1,trash2);
                // else if(min(i,j)+1>9)
                //     sum+=min(i,j)+1-10;
                // else
                //     sum+=min(i,j)+1-5;
                //cout <<min(trash1,trash2)+1 <<" "<< sum<<"\n";
             }
         }
     }
    cout<< sum<<"\n";
    return;
}

int main(){
    int loop;   cin >> loop;
    while(loop--){
        func();
    }
}