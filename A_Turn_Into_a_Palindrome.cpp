#include <iostream>
#include <string>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

    int loop;
    cin >> loop;
    while (loop--) {
        int num, count=0;
        char a;
        cin >> num >>a;
        string input;   cin >> input;
        for(int i=0; i<(num+1)/2; i++){
            if(input[i]!=input[num-1-i]){
                if(input[i]!=a)
                    count++;
                //cout << count <<endl;
                if(input[num-1-i]!=a)
                count++;
                //cout << count <<endl;
            }
        }
        cout << count<< endl;
    }
    return 0;
}