int totalMoney(int n) {
    int week = n / 7;
    int days = n % 7;

    int total = week * 28 + (7 * week * (week - 1)) / 2;

    for (int i = 0; i < days; i++) {
        total += (week + 1) + i;
    }

    return total;
}