int accountBalanceAfterPurchase(int purchaseAmount) {
    int rounded =floor((purchaseAmount + 5) / 10) * 10;
    int res = 100-rounded;
    return res;
    
}