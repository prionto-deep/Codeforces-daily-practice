#include<iostream>
#include<string>
using namespace std;

int main(){
    int loop;
    cin >> loop;
    while(loop--){
        string input1, input2, input3;
        cin >> input1 >>input2 >> input3;
        cout << input1[0]<<input2[0]<<input3[0]<<endl;
    }
}