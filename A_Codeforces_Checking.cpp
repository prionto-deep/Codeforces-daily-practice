#include <iostream>
#include <vector>
#include<unordered_set>
using namespace std;

    vector<int> findMissing(vector<int>& a, vector<int>& b) {
        
        unordered_set<int> in_b(b.begin(), b.end());

        vector<int> result;

        for (int x : a) {
            if (in_b.count(x) == 0) { 
                result.push_back(x);
            }
        }

        return result;
    }

int main() {
    int num1, num2;
    vector<int> input_a(num1), input_b(num2);
    for(int i=0; i<num1; i++)
        cin >> input_a[i];

    for(int i=0; i<num2; i++)
        cin >> input_b[i];
    findMissing(input_a, input_b);
    return 0;
}