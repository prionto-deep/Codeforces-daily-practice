#include<iostream>
#include<string>
using namespace std;

int func(int num, string input){
    int result=0;
    for(int i=0; i<(num+1)/2; i++){
        if(input[i]==input[num-1-i]){
            result=num-(2*i);
            break;
        }
    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int loop;   cin >> loop;
    while(loop--){
        int num,result=0;
        string input;   cin >>num >> input;
        result=func(num,input);
        cout << result <<"\n";
    }
}