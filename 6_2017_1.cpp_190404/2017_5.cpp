#include <iostream>
#include <cstring>
using namespace std;

void convertString(char *str){
	int n=strlen(str);
	
	for(int i=0; str[i];i++){
		if(str[i]==' '){
			for(int j=n+2;j>=i+2;j--){
				str[j]=str[j-2];	
			}
			str[i]='%';
			str[i+1]='2';
			str[i+2]='0';
			n=n+2;
		}
	}
}
int main(void){
	char input[100]="Hello world.Nice to meet you.";
	convertString(input);
	cout<<input<<endl;
	
	return 0;
}
