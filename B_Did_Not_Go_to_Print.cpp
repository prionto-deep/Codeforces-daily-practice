#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        vector<int> st, res;
        for (int i=1; i<=n; i++)
        {
            char c=s[i - 1];
            if (c=='1')
            {
                st.push_back(i);
            }
            else if (c=='2')
            {
                if (!st.empty())
                {
                    st.pop_back();
                    res.push_back(i);
                }
            }
        }
        for (int x:st)
            res.push_back(x);
        sort(res.begin(), res.end());

        cout << res.size() << "\n";
        for (size_t j=0; j<res.size(); j++)
        {
            if (j)
                cout << " ";
            cout << res[j];
        }
        cout << "\n";
    }
    return 0;
}