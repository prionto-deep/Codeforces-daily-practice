#include<iostream>
#include<vector>
using namespace std;

int main(){
    int test;   cin >> test;
    while(test--){
        int count=0;
        vector<int> input(4) ;
        for(int i=0; i<4; i++){
            cin>> input[i];
            if(i!=0){
                if(input[i]>input[0])
                    count++;
            }
        }
        cout<<count <<endl;
    }
}