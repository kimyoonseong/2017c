#include <iostream>
#include <cstring>
using namespace std;
char *f(char *full, char *part){
	bool isSame;
	
	int len=strlen(full);
	for(int i=0;i<len;i++){
		for(int j=0;j<strlen(part);j++){
			if(full[i]==part[j]){
				return full+i;
			}
		}
	}
	return NULL;
}

int main(void){
	char src[]="h,ello, world";
	char*p=f(src, " ,o");
	cout<<p;

	return 0;
}
		
