#include<iostream>
#include<vector>
using namespace std;
using ll=long long;

int main(){
    int num, time;  cin >> num >>time;
    vector<int> input(num);
    for(int i=0; i<num; i++)
        cin>> input[i];
    int max_len=0;
    int first=0, last=0;
    ll sum=0;
    while(last<num){
        sum+=input[last];
        if(sum>time){
            sum-=input[first];
            first++;
        }
        if(sum<=time)   max_len=max(max_len,last-first+1);
        last++;
    }
    cout << max_len;
}