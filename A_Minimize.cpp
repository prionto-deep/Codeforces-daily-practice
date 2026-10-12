#include <iostream>
#include <vector>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

    int loop;
    cin >> loop;
    while (loop--) {
        int input1, input2; cin>> input1 >> input2;
        cout <<(input1>input2?input1-input2:input2-input1)<<"\n";
    }
    return 0;
}