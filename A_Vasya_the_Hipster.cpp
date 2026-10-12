#include<iostream>
using namespace std;

int main(){
    int input1, input2; 
    cin >> input1 >> input2;
    int max, min;
    max=input1>input2 ? input1: input2;
    min=input1>input2? input2: input1;
    cout << min << " " <<(max-min)/2;

}