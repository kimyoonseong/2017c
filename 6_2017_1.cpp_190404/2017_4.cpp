#include <iostream>
#include <string>
using namespace std;

bool isNumber(int x){
	if(x>='0'&&x<='9')
		return true;
	else
		return false;	//t���ھƴϸ� false return 
}

int main(void){
	string str;
	cin>>str;//���������� getline 
	
	int cnt=0;
	for(int i=0;i<str.size();i++){
			if(isNumber(str[i]) && isNumber(str[i+1])==false)//�������� �ڴ� ���ڸ�cnt++; 
				cnt++;	
	}
	cout<<cnt<<endl;
	return 0;
}
		
		
