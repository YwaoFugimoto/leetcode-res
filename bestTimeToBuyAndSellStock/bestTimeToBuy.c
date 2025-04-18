int maxProfit(int* prices, int pricesSize) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 0; i < pricesSize; i++) {
        if(prices[i] < minPrice){ // verify lowest value
            minPrice = prices[i];
        } else {
            int profit = prices[i] - minPrice;
            if (profit > maxProfit) // verify profit
                maxProfit = profit;
        }
    }

    return maxProfit;
}