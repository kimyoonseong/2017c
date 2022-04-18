#include <iostream>
#include <string.h>
int erase(char ch){
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
		return 0;
	else
		return 1;	
}
int main(void){
	freopen("test2.txt","r",stdin);
	
	char buf[100];
	scanf("%s", buf);
	int len=strlen(buf);
	for(int i=0;i<len;){//증감은 아래경우에서 결정한다. 
		if(erase(buf[i])){
			for(int j=i;j<len;j++){//널문자도copy해 와야한다. 
				buf[j]=buf[j+1];	
			}
			len--;//한글자 지워서 전체길이 감소시켜야하고 i는 증가시킨다. 
		}
		else
			i++;//다음글자로 넘어간다. 
	}
	printf("%s",buf);
	return 0;
}
