#include <iostream>
#include <vector>
using namespace std;

int main(){
    int loop;   cin >> loop;
    while(loop--){
        int loop2;  cin >> loop2;
        vector<int> input(loop2);
        for(int i=0; i<loop2; i++){
            cin >> input[i];
        }
        int sum = 0;
        for (int value : input) {
            sum += value;
        }
        cout << (sum % 2 == 0 ? "YES\n" : "NO\n");
        
    }
}