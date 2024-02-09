#include <string>
using namespace std;

bool isPalindrome_1(string& str,int start,int last){

        if (start>=last){
            return true;
        }
        else{
            if (str[start]==str[last]){
                return isPalindrome_1(str,start+1,last-1);

            }
            else{
                return false;
            }
        }
    }

bool isPalindrome(string& str) {
    // Write your code here.
    
      if (str.length()==1 or str.length()==0){
        return true;
    }
        if (str[0]==str[str.length()-1]){
            str[str.length()-1]='\0';
            bool small_output=isPalindrome(*(&str+1));
            if (small_output==true){
                return true ;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }



