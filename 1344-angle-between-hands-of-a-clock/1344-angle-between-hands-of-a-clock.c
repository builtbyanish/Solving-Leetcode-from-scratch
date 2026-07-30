double angleClock(int hour, int minutes) {
    double minutehand = minutes*6;
    double hourhand = (hour % 12+ minutes/60.0) * 30;
    double degree = fabs(hourhand - minutehand);
    if(degree>180){
        return 360- degree;
    }
    else{
        return degree;
    }
    
}