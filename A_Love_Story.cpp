#include <iostream>
#include <string>
#include <numeric>

using namespace std;

void func() {
    string input;
    cin >> input;
    const string target = "codeforces";

    int mismatches = inner_product(
        input.begin(), input.end(), 
        target.begin(), 
        0, 
        plus<int>(), 
        not_equal_to<char>()
    );

    cout << mismatches << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int loop;
    cin >> loop;
    while (loop--) {
        func();
    }
    return 0;
}