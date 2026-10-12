#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int shop_num;
    cin >> shop_num;
    vector<int> priceInShop(shop_num);
    for (int i = 0; i < shop_num; i++)
    {
        cin >> priceInShop[i];
    }

    sort(priceInShop.begin(), priceInShop.end());

    int days;
    cin >> days;
    while (days--)
    {
        int limit;
        cin >> limit;

        auto it = upper_bound(priceInShop.begin(), priceInShop.end(), limit);
        //cout << distance(priceInShop.begin(), it) << '\n';
        cout << *it <<endl;
    }

    return 0;
}