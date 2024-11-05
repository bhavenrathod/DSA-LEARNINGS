#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int mini = prices[0];
    int maxProfit = 0;
    int n = prices.size();

    for (int i = 0; i < n; i++)
    {
        int cost = prices[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, prices[i]);
    }
    return maxProfit;
}

// TC is O(n)
// SC is O(1)

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int ans = maxProfit(prices);
    cout << "Max Profit is " << ans << endl;
    return 0;
}