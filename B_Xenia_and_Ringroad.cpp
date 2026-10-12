#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int max, num;
    if(!(cin >> max >>num)) return 0;

    vector<int> input(num+1);
    input[0]=1;
    for(int i=1; i<=num; i++){
        cin>> input[i];
    }
    // for(int i=0; i<=num; i++){
    //     cout << input[i];
    // }
    long long sum=0;
    for(int i=0; i<num; i++){
        if(input[i]<input[i+1]){
            sum+=input[i+1]-input[i];
            //cout<< sum << endl;
        }
        else if(input[i]>input[i+1]){
            sum+=max+input[i+1]-input[i];
        }
    }
    cout << sum <<endl;
}