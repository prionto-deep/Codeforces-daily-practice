#include<iostream>
#include<vector>
using namespace std;

int main(){
    int loop;   cin >> loop;
    int count=0;
    vector<int> input(loop);
    for(int i=0; i<loop; i++){
        cin >> input[i];
    }
    sort(input.begin(),input.end());
    
    cout << (count==loop? count-1 : count);
}