#include <iostream>
#include <string>
using namespace std;

int main(void){
	char *str;
	char a[100], b[100];
	
	cin.getline(a, '\n');
	cin.getline(b, '\n');// �迭�� �׳� getline
	
	int i, len1, len2;
	for(len1=0;a[len1];len1++)
	for(len2=0;b[len2];len2++)
	
	str=new char[len1+len2+1+1];//+1 ���� , +1, null���� ������ �� 
	for(i=0;i<len1;i++)
		str[i]=a[i];
		
	str[i]=' ';
	
	for(i=0;i<len2;i++)
		str[len1+1+i]=b[i];
	
	str[len1+len2+1]=='\0';	
	
	cout<<str<<endl;
	delete str;// �����߿�! 
	
	return 0;
}
	
