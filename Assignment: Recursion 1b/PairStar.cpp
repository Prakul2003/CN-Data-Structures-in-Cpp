// Change in the given string itself. So no need to return or print the changed string.
#include <cstring>

void pairStar(char input[]) {
    // Write your code here
    if (strlen(input)==1) {
      return;
    }
    pairStar(input+1);
    if(input[0]==input[1]){
      for(int i=strlen(input)+1;i>1;i--){
        input[i]=input[i-1];

      }
      input[1]='*';
    }
   
}
