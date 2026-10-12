#include<iostream>
#include<vector>
using namespace std;

int main(){
    int loop;   cin >> loop;
    while(loop--){
        int innerLoop, endOfTrack;  cin >> innerLoop >> endOfTrack;
        vector<int> input(innerLoop+2);
        input[0]=0; input[innerLoop+1]=endOfTrack;
        for(int i=1; i<=innerLoop; i++){
            cin >> input[i];
        }
        // for(int i=0; i<innerLoop+2; i++){
        //     cout << input[i] << endl;
        // }
        int max=0;
        for(int i=1; i<innerLoop+2; i++){
            if(input[i]-input[i-1]>max)
                max=input[i]-input[i-1];
        }
        if(2*(input[innerLoop+1]-input[innerLoop])>max)
            max=2*(input[innerLoop+1]-input[innerLoop]);
        cout << max <<endl;
    }
}