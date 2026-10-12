#include <iostream>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x0, y0, r;
        scanf("%d %d %d", &x0, &y0, &r);
        printf("%d %d\n", x0 + r, y0);
    }
    return 0;
}