#include<iostream>
#include<vector>
using namespace std;
int func(int loop){
    int max=0, count=0;
    int input;
    for(int i=0; i<loop; i++){
        cin >> input;
        if(input==0){
            count++;
            if(count>max)
                max=count;
        }
        else
            count=0;
    }
    return max;
}
int main(){
    int loop;   cin >> loop;
    while(loop--){
        int input;  cin>> input;
        int c=func(input);
        cout << c << endl;
    }
    
}