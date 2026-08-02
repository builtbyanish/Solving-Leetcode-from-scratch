int getCost(int startAt, int moveCost, int pushCost, int m, int s) {
    int arr[4] = {m / 10, m % 10, s / 10, s % 10};
    int i = 0;
    while (i < 3 && arr[i] == 0)
        i++;
    int cost = 0;
    int finger = startAt;
    while (i < 4) {
        if (finger != arr[i]) {
            cost += moveCost;
            finger = arr[i];
        }
        cost += pushCost;
        i++;
    }
    return cost;
}
int minCostSetTime(int startAt, int moveCost, int pushCost, int targetSeconds) {
    int ans = INT_MAX;
    int m = targetSeconds / 60;
    int s = targetSeconds % 60;
    if (m <= 99)
        ans = getCost(startAt, moveCost, pushCost, m, s);
    if (m > 0 && s + 60 <= 99) {
        int cost = getCost(startAt, moveCost, pushCost, m - 1, s + 60);
        if (cost < ans)
            ans = cost;
    }
    return ans;
}