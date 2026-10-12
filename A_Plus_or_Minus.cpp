#include<iostream>
using namespace std;

int main(){
    int test;   cin >> test;
    while(test--){
        int input1, input2, input3;
        cin >> input1 >> input2 >> input3;
        bool plus=(input1+input2==input3);
        cout << (plus? "+\n" : "-\n");
    }
}