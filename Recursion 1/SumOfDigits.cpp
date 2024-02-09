int sumOfDigits(int n) {
    // Write your code here
    if (n<10){
        return n;
    }
    else{
        int a = n%10;
        return a+sumOfDigits(n/10);
    }

}


