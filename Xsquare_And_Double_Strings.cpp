#include <iostream>
#include <set>
using namespace std;

int main() {
    int loop;
    cin >> loop;

    while (loop--) {
        string input;
        cin >> input;

        bool check = false;
        set<char> seen;

        for (char c : input) {
            if (!seen.insert(c).second) {
                check = true;
                break;
            }
        }

        cout << (check ? "Yes\n" : "No\n");
    }

    return 0;
}