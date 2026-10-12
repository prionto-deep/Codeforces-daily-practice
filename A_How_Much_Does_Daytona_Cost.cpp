#include<iostream>
#include<vector>
using namespace std;

int main(){
    int test;   cin >> test;
    while(test--){
        int loop, common;  cin >> loop >> common;
        vector<int> input(loop);
        bool ok=false;
        for(int i =0; i<loop; i++){
            cin >> input[i];
            if(input[i]==common){
                //cout << input[i] << common << endl;
                ok=true;
            }
        }
        cout <<(ok ? "YES\n" : "NO\n");
    }
}