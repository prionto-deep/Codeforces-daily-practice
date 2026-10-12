#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;    cin>> num;
    vector<int> input(num);
    for(int i=0; i<num; i++)    cin >> input[i];
    sort(input.begin(), input.end());
    
    
}