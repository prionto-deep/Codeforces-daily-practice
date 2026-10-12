#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int loop;
        long long input;
        cin >>loop;
        long long sum=0;
        while(loop--){
            cin >> input;
            sum+=input;
        }
        long long check=sqrt(sum);
        if(check*check==sum)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}