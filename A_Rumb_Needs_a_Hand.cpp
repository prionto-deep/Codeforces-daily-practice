#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    if(!(cin>> t)) return 0;
    
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n);
        for (auto &x : p) cin >> x;

        vector<int> vals;      
        vector<int> idx;       

        for (int i = 0; i < n; i++)
        {
            if (p[i] != i + 1)
            {
                vals.push_back(p[i]);
                idx.push_back(i);
            }
        }

        reverse(vals.begin(), vals.end());

        for (size_t k = 0; k < idx.size(); k++)
            p[idx[k]] = vals[k];

        bool ok = true;
        for (int i = 0; i < n; i++)
            if (p[i] != i + 1) { ok = false; break; }

        cout << (ok ? "YES" : "NO") << "\n";
    }
}