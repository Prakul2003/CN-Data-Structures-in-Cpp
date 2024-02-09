#include <cstring>
int stringToNumber(char input[]) {
    // Write your code here
    if (input[0]=='\0'){
        return 0;
    }
    int a=1;
    for (int i=1;i<strlen(input);i++){
        a=a*10;
    }
    return (input[0]-'0')*a+stringToNumber(input+1);
}


