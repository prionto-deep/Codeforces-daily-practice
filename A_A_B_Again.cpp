#include<iostream>
using namespace std;

int main(){
    int test;   cin >> test;
    while(test--){
        int input;  cin >> input;
        int count =0; 
        count+=input%10+input/10;
        cout << count <<endl;
    }
}