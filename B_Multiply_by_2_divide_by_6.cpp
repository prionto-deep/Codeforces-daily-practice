#include<iostream>
using ll=long long;
using namespace std;

void func_count(){
    ll input;  cin >> input;
    int count=0;
    while(input!=1){
        if(input%3!=0){
            cout <<"-1\n";
            return;
        }
        if(input%6==0){
            input=input/6;
        }
        else{
            input*=2;
        }
        count++;
        //cout << input <<"\n";
    }
    cout << count<<"\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int loop;   cin >> loop;
    while(loop--){
        func_count();
    }
}