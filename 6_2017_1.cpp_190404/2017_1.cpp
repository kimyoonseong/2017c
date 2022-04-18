#include <iostream>
#include <string>
using namespace std;
int main(void){
	string str;
	cout<<"문자열을 입력:";
	getline(cin,str, '\n');
	
	int cnt=0;
	for(int i=0;i<str.size();i++){
		if(str[i]=='x')
			cnt++;
	}
	cout<<"x의 개수는 "<<cnt<<endl;
	return 0;
}
