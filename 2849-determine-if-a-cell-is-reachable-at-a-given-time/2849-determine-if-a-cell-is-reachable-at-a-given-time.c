bool isReachableAtTime(int sx, int sy, int fx, int fy, int t){
    if(sx==fx && sy==fy && t==1)
        return false;
    int dx = abs(sx-fx);
    int dy = abs(sy-fy);
    int need = (dx>dy)?dx : dy;
    return t>= need; 

}