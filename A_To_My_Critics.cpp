#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void func(){
    vector<int> input(3);
    for(int i=0; i<3; i++){
        cin >> input[i];
    }
    sort(input.begin(),input.end());
    cout <<((input[1]+input[2]>=10)?"YES\n":"NO\n");
    return;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

    int loop;
    cin >> loop;
    while (loop--) {
        func();
    }
    return 0;
}