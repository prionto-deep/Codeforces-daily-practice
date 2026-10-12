#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> precom;
    int count=0,i=1;
    while(precom.size()<1010){
        if(i%3!=0 && i%10!=3){
            precom.push_back(i);
        }
        i++;
        count++;
    }
    int loop;   cin>> loop;
    while(loop--){
        int k;  cin >> k;
        cout << precom[k-1]<<"\n";
    }
}