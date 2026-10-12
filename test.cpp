#include<iostream>
#include<vector>
#include<numeric>
#include<string>
using namespace std;

int main(){
    vector<int> v1={1, 2, 3};
    vector<int> v2={4, 5, 6};
    
    int result=inner_product(v1.begin(), v1.end(), v2.begin(), 0);

    cout << result;
}