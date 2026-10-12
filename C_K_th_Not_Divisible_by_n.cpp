#include<iostream>
using namespace std;
void func(){
    int div, position; cin >> div >> position;
    int result=position+(position-1)/(div-1);
    cout<< result<< "\n";
}

int main(){
    int loop;   cin >> loop;
    while(loop--){
        func();
    }
}