#include <iostream>
#include <cstring>
using namespace std;
//char * strstr(const char * str1, const(char* str2);
char *f(char *full,const char *part){
	bool isSame;
	int len=strlen(full)-strlen(part);
	for(int i=0;i<=len;i++){
		for(int j=0;j<strlen(part);j++){
			if(full[i+j]==part[j]){
				isSame=true;
			}
			else{
				isSame=false;
				break;	
			}
		}
		if(isSame)
			return full+i;
	}
	return NULL;
}
int main(void){
	char str[]="This is simple simple string";
	char *pch;
	pch=f(str, "simple");
	printf("%s", pch);	
	return 0;
}
