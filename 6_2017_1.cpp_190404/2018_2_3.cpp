#include <iostream>
#include <cstring>
using namespace std;

void convert(char *str){
	int len=strlen(str);
	int i, cnt[256]={0,};
	int check[256]={0,};
	//먼저 각문자의 빈도수를 기록한다. 
	for(i=0;i<len;i++){
		int x=str[i];
		cnt[x]++;
	}
	//2개 이상인 것은 첫번째로 나타난 것만 남기고 나머지는 제거 
	for(i=0;i<len;i){
		if(cnt[str[i]]>1&& check[str[i]]==0){//첫문자는 그냥 넘어간다. 
			check[str[i]]=1;
			i++;
		}
		else if(cnt[str[i]]>1 && check[str[i]]==1){//반복된 문자이므로 뒤에서 하나씩 당긴다. 
			for(int j=i;j<len;j++){//널문자도 copy해와야한다. 
				str[j]=str[j+1];
			}
			len--;//한글자 지워서 전체길이 감소시키소 i는 증가시키지않는다. 
		}
		else
			i++;
	}
}
int main(void){
	char input[]="hello, world";
	convert(input);
	cout<<input; 
	return 0;
}
