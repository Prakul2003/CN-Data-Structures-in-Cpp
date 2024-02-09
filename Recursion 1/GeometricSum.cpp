double geometricSum(int k) {
    // Write your code here
   if (k==0){
       return 1.00000;
   }
   else{
       double a=1.00000;
       for(int i=1 ;i<=k;i++){
           a=a*2;
       }
       return geometricSum(k-1)+1/a;
   }
}


