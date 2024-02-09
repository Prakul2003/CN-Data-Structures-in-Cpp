int count(int n){
    //write your code here
    if(n/10==0){
        // iski jagah hum yeh bhi use kar skte hai ki if n is less than 10 as if n<10 then n/10==0
        //i.e if (n<10){ return 1}
        return 1;
    }
    else{
        int smaller=count(n/10);
        return smaller+1;
    }
}
