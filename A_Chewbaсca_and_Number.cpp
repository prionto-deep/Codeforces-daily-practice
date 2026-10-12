#include<iostream>
#include<string>
using namespace std;

int main(){
    string input;   cin >> input;
    
    for(int i=0; i<input.length(); i++){
        int num=input[i]-'0';
        if(num==9 && i==0)  continue;
        if(num==1)
            continue;
        else if(num>4){
            input[i]='0' +(9-num);
        }
    }
    cout << input;
}