#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int player1, player2;   cin>> player1 >>player2;
    int temp= 6 - max(player1, player2)+1;
    int max=6;
    int div=gcd(temp,max);
    cout <<temp/div <<"/" <<max/div;
}