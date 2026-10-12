#include<iostream>
#include<string>
using namespace std;

void func(){
    string input;   cin >> input;
    if(input[0]=='a' || input[1]=='b' || input[2]=='c'){
        cout << "YES\n";
    } 
    else 
        cout <<"NO\n";
    return;
}

int main(){
    int loop;   cin >> loop;
    while(loop--){
        func();
    }
}