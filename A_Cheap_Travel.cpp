#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int trips, mul_ride, cost, mul_cost;
    cin >> trips >> mul_ride >> cost >> mul_cost;

    int individual= trips*cost;
    int multi=(trips/mul_ride)*mul_cost+(trips%mul_ride)*cost;
    int multi_extra=((trips+mul_ride-1)/mul_ride)*mul_cost;
    cout << min({individual, multi, multi_extra});
}