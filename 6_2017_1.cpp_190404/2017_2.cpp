#include <iostream>
#include <string>
using namespace std;

int add(string str){
	int sum=0;
	for(int i=0;i<str.size();i++){
		sum=sum+(str[i]-'0');
	}
	return sum;
}
int main(void){
	string str;
	cout<<"���� ���� �Է�: ";
	getline(cin,str,'\n');
	
	cout<<"���� "<<add(str)<<endl;
	
	return 0;
}
