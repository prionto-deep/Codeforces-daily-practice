#include<iostream>
using namespace std;

int main(){
    int loop;
    cin >> loop;
    while(loop--){
        long long input;
        cin >> input;

        while(input%2==0)
            input/=2;
        cout<<(input>1 ? "YES\n" : "NO\n");
    }
}