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
	for(int i=0;i<len;){//������ �Ʒ���쿡�� �����Ѵ�. 
		if(erase(buf[i])){
			for(int j=i;j<len;j++){//�ι��ڵ�copy�� �;��Ѵ�. 
				buf[j]=buf[j+1];	
			}
			len--;//�ѱ��� ������ ��ü���� ���ҽ��Ѿ��ϰ� i�� ������Ų��. 
		}
		else
			i++;//�������ڷ� �Ѿ��. 
	}
	printf("%s",buf);
	return 0;
}
