#include <iostream>
#include <string>
using namespace std;
int main(void){
	string str;
	cout<<"���ڿ��� �Է�:";
	getline(cin,str, '\n');
	
	int cnt=0;
	for(int i=0;i<str.size();i++){
		if(str[i]=='x')
			cnt++;
	}
	cout<<"x�� ������ "<<cnt<<endl;
	return 0;
}
