int firstIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
  if (size==0){
      return -1;
  }
  else{
    if (input[0]==x){
      return 0;
    }
    else{
      int small_output=firstIndex(input+1,size-1, x);
      if (small_output==-1){
      return -1;
      } else {
        return small_output + 1;
      }
    }
  }
}