int findMinimumCoins(int amount) 
{
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int minCoins = 0;
    while(amount){
        vector<int>::iterator itr = lower_bound(coins.begin(),coins.end(),amount);
        int index = itr-coins.begin();
        if(coins[index] == amount){
            amount -= coins[index];
        }else{
            amount -= coins[index-1];
        }
        minCoins++;
    }
    return minCoins;
}
