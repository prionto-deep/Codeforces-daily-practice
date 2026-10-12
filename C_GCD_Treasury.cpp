#include <iostream>
#include<vector>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    
    int max_val = x;
    vector<int>a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
        max_val=max(max_val, a[i]);
    }
    
    vector<long long>cnt(max_val + 1, 0);
    for (int v:a) {
        cnt[v]++;
    }

    vector<int>divisors;
    for (int i=1; 1LL*i*i <=x; i++) {
        if (x % i==0) {
            if (i >1) divisors.push_back(i);
            if (i*i!=x && x/i>1) divisors.push_back(x/i);
        }
    }
    
    long long max_coins=0;

    for (int d:divisors) {
        long long current_coins=0;
        for (int mult=d; mult<=max_val; mult += d) {
            if (cnt[mult]>0) {
                current_coins+=cnt[mult]*mult;
            }
        }
        max_coins=max(max_coins, current_coins);
    }
    
    cout<<max_coins << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}