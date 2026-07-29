int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    int reach = arrivalTime + delayedTime;
    int hour = reach%24;
        return hour;
    }