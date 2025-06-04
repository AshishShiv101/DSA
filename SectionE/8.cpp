#include <iostream>
#include <vector>

int maxProfit(std::vector<int>& prices) {
    if (prices.size() < 2) return 0;
    int min_price = prices[0];
    int max_profit = 0;
    for (size_t i = 1; i < prices.size(); ++i) {
        if (prices[i] < min_price) {
            min_price = prices[i];
        }
        int current_profit = prices[i] - min_price;
        if (current_profit > max_profit) {
            max_profit = current_profit;
        }
    }
    return max_profit;
}
int main() {
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};
    std::cout << "Maximum profit: " << maxProfit(prices) << std::endl;
    return 0;
}
