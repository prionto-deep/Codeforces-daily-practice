#include<iostream>
#include<vector>
using namespace std;

void spy(){
    int num;    cin >> num;
    vector<int> input(num);
    for(int i=0; i<num; i++)
        cin >> input[i];
    int count=(input[0]==input[1])? input[0]:input[2];
    for(int i=0; i<num; i++){
        if(count!=input[i]){
            cout << i+1 << endl;
            return;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int loop;   cin>> loop;
    while(loop--){
        spy();
    }
}