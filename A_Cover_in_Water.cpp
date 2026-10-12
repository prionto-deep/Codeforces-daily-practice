#include<iostream>
#include<string>
using namespace std;

void func(){
    int num;    cin>> num;
    string input;   cin >> input;
    int count=0, count_dot=0;
    for(int i=0; i<num; i++){
        if(input[i]=='.'){
            count++;
            if(count==3){
                cout <<2<<"\n";
                return;
            }
            count_dot++;
        }
        else
            count=0;
        //cout << count << " ";
    }
    cout << count_dot<<"\n";
    return;
}

int main (){
    int loop;   cin >> loop;
    while(loop--){
        func();
    }
}