#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;    cin >> num;
    vector<int> input(num);
    vector<int> count_num(3), count1, count2, count3;
    for(int i=0; i<num; i++){
        cin >> input[i];
        switch (input[i])
        {
        case 1:
            count_num[0]++;
            count1.push_back(i+1);
            break;
        case 2:
            count_num[1]++;
            count2.push_back(i+1);
            break;
        case 3:
            count_num[2]++;
            count3.push_back(i+1);
            break;
        
        default:
            break;
        }
    }
    int minimum=min({count_num[0],count_num[1],count_num[2]});
    cout << minimum <<"\n";
    for(int i=0; i<minimum; i++){
        cout << count1[i] <<" "<< count2[i] << " " << count3[i]<< "\n";
    }

}