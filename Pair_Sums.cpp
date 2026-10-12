#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

    int loop, sum;  
    if(!(cin >> loop>> sum)) return 0;

    unordered_set<int> seen;
    for(int i=0; i<loop; i++){
        int current;    cin >> current;

        int required = sum- current;

        if(seen.count(required)){
            cout << "YES\n";
            return 0;
        }
        seen.insert(current);
    }    
    cout << "NO\n";
}