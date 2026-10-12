#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int loop;
    cin >> loop;
    while (loop--) {
        int n;
        cin >> n;

        int count_0 = 0, count_1 = 0;
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            if (val == 0) {
                count_0++;
            } else {
                count_1++;
            }
        }

        cout << (count_1 >= count_0 ? "Bessie\n" : "Elsie\n");
    }
    return 0;
}