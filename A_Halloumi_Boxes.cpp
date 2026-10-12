#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void funct(){
    int num, max; cin >> num >> max;
    vector<int> input(num);
    for(int i=0; i<num; i++){
        cin >> input[i];
    }
    if(max>1){
        cout << "YES\n";
        return;
    }
    cout << (is_sorted(input.begin(),input.end())? "YES\n" : "NO\n");
}
int main(){
    int loop;   cin >> loop;
    while(loop--){
        funct();
    }
}
/*
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

void M41(){

        int n,k;
        cin >> n >>k; int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
        if(k>1) {cout<<"YES"<<endl; return;}
    
     for(int i=0;i<n-1;i++)  {
            if( !(arr[i] <= arr[i+1]))
            {cout<<"NO"<<endl; return;}            
        }
    cout<<"YES"<<endl;
    
    
}
 
 
int main() {
    fast_io;
    int t; cin >> t; while (t--)  
     {      
      M41();  
     }
    return 0;
}
*/