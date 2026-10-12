#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>input(4);
    int loop=4;
    for(int i=0; i<loop; i++){
        cin >> input[i];
    }
    sort(input.begin(), input.end());
    for(int j=0; j<3; j++){
        cout << input[3]-input[j]<<" ";
    }
}