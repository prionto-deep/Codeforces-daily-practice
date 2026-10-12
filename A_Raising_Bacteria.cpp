#include<iostream>
typedef long long ll;
using namespace std;

int bacteria(ll input){
    int sum=0;
    while(input!=0){
        if(input%2==1)
            sum+=1;
        input/=2;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll input;  cin >> input;
    int result=bacteria(input);
    cout << result;
}