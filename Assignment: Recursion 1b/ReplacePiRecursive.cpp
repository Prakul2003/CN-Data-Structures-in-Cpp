// Change in the given string itself. So no need to return or print anything
#include <cstring>
void replacePi(char input[]) {
	// Write your code here
if(strlen(input)==1){
	return;
}
replacePi(input+1);
if (input[0]=='p' and input[1]=='i'){
	input[0]='3';
	input[1]='.';
	for(int i=strlen(input)+2;i>1;i--){
		input[i]=input[i-2];
	
	}
	input[2]='1';
	input[3]='4';

	}
}

