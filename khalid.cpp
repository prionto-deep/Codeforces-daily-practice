#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

long long bank(int days, int w) {
    if (w == 1) {
        return 1LL << days;
    }

    long long result = 0;
    for (int i = 1; i <= days; ++i) {
        result += 1LL << i;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int loop;
    cin >> loop;
    while (loop--) {
        int days, w;
        cin >> days >> w;
        cout << bank(days, w) << '\n';
    }
    return 0;
}