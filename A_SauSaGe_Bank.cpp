#include <iostream>
#include <vector>
#include<cmath>
using namespace std;
using ll=long long;

ll bank(int days, int w){
    ll result=0;
    if(days==w){
        result=days*2;
    }
    else{
        result=pow(2,days-w+1)+(w-1)*2;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int loop;
    cin >> loop;
    while (loop--) {
        int days, w;  cin >> days >>w;
        ll x=bank(days,w);
        cout <<x<<endl;
    }
}