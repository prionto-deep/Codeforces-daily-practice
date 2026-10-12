#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string, int> m;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >>s;
        m[s]++;
    }
    map<int, string> 
    for(auto pr : m){
        cout << pr.first <<" " <<pr.second <<endl;
    }
    return 0;
}