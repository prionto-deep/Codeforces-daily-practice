#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    //ios::sync_with_stdio;
    cin.tie(nullptr);

    int loop;   cin>> loop;
    while(loop--){
        int num;    cin>> num;
        vector<int> input(num);
        for(int i=0; i<num; i++){
            cin >> input[i];
        }
        if(num==1){
            cout <<"YES\n"; continue;
        }
        sort(input.begin(),input.end());
        bool check=true;
        for(int i=1; i<num; i++){
            if(input[i]-input[i-1]>1){
                check=false;
            }
        }
        cout <<(check? "YES\n":"NO\n");
    }

}