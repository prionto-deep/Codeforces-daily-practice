#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void find_mid(){
    vector<int> input(3);
    for(int i=0; i<3; i++)
        cin >> input[i];
    sort(input.begin(),input.end());
    cout<<input[1]<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int loop;   cin>>loop;
    while(loop--){
        find_mid();
    }
}