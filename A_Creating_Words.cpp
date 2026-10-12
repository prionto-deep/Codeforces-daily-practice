#include<iostream>
#include<string>
using namespace std;

int main(){
    int loop;   cin >> loop;
    while(loop--){
        string input1, input2;  cin >> input1 >> input2;
        char a,b;
        a=input1[0];    input1[0]=input2[0];
        input2[0]=a;
        cout << input1 << " "<< input2 <<"\n";
    }
}