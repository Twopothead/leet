#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int  r2v(char r){
	int v=0;
	switch(r){
		case 'I': v=1;break;
		case 'V': v=5;break;
		case 'X': v=10;break;
		case 'L': v=50;break;
		case 'C': v=100;break;
		case 'D': v=500;break;
		case 'M': v=1000;break;
	}
	return v;
}
int romanToInt(char * s){
	int len=strlen(s);
	int value=0;
	int tmpv=0;
	int beforev=0;
	int i;
	for(i=len;i>=0;i--){
		tmpv=r2v(s[i]);
		if(tmpv>=beforev){
			value+=tmpv;
		}else{
			value-=tmpv;
		}
		beforev=tmpv;
	}
    return value;
}
int main()
{ 
	//char *rv = "XI";
	//char *rv = "MCMXCIV";
    // char *rv = "IV";
    // char *rv = "III";
    // char *rv = "IX";
    // char *rv = "LVIII";
	printf("%d",romanToInt(rv));
	return 0;
}
