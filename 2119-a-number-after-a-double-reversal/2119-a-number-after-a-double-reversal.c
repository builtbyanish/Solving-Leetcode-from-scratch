bool isSameAfterReversals(int num) {
    int rev =0;
    int rem =0;
    int rem1=0;
    int rev1=0;
    int num1=num;
    while(num!= 0){
        rem = num %10;
        rev = rev*10+ rem;
        num = num/10;
    }
    while(rev!=0){
        rem1 = rev%10;
        rev1=rev1*10+rem1;
        rev=rev/10;
    }
    if(rev1 == num1) {
        return true;
    }
    else{ 
        return false;
    }  
}