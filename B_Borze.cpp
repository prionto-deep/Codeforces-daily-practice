#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string input;  cin >> input;
    for(int i=0; i<input.length(); i++){
        if(input[i]=='.')
            cout <<"0";
        else if(input[i]=='-'){
            if(input[i+1]=='.')
                cout << "1";
            else
                cout<<"2";
            i++;
        }
    }
}