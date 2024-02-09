int countZeros(int n) {
    // Write your code here
    if (n==0){
        return 1;
    }
    else if (n>0 and n<10){
        return 0;
    }
    else{
        int a=n/10;
        if(n%10==0){
            return (countZeros(a)+1);
        }
        else{
            return countZeros(a);
        }
    }

}


