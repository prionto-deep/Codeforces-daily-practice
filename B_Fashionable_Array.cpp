#include <iostream>
#include <vector>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

    int loop;
    cin >> loop;
    while (loop--) {
        int num;    cin >> num;
        vector<int> input(num), output(num);
        vector<int> count(10);
        for(int i=0; i<num; i++){
            cin >> input[i];
            count[input[i]]++;
        }
        

    }
    return 0;
}