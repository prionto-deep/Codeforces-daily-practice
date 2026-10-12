#include<iostream>
using namespace std;

void find_odd_one(){
    int num1, num2, num3;   cin>>num1>>num2>>num3;
    int count=(num1==num2)?num3:((num2==num3)?num1:num2);
    cout <<count<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int loop;   cin >> loop;
    while(loop--){
        find_odd_one();
    }
}