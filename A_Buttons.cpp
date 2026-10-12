#include<iostream>
using namespace std;

void func(){
    int first, second, both;    cin >> first >> second >> both;
    int anna=(both+1)/2+first;
    int katie=(both-(both+1)/2)+second;
    cout << (anna>katie? "First\n": "Second\n");
}

int main(){
    int loop;   cin >> loop;
    while(loop--){
        func();
    }
}