#include <iostream>
#include <cstring>
using namespace std;

void convert(char *str){
	int len=strlen(str);
	int i, cnt[256]={0,};
	int check[256]={0,};
	//���� �������� �󵵼��� ����Ѵ�. 
	for(i=0;i<len;i++){
		int x=str[i];
		cnt[x]++;
	}
	//2�� �̻��� ���� ù��°�� ��Ÿ�� �͸� ����� �������� ���� 
	for(i=0;i<len;i){
		if(cnt[str[i]]>1&& check[str[i]]==0){//ù���ڴ� �׳� �Ѿ��. 
			check[str[i]]=1;
			i++;
		}
		else if(cnt[str[i]]>1 && check[str[i]]==1){//�ݺ��� �����̹Ƿ� �ڿ��� �ϳ��� ����. 
			for(int j=i;j<len;j++){//�ι��ڵ� copy�ؿ;��Ѵ�. 
				str[j]=str[j+1];
			}
			len--;//�ѱ��� ������ ��ü���� ���ҽ�Ű�� i�� ������Ű���ʴ´�. 
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
