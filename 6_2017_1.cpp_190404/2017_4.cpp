#include <iostream>
#include <string>
using namespace std;

bool isNumber(int x){
	if(x>='0'&&x<='9')
		return true;
	else
		return false;	//t숫자아니면 false return 
}

int main(void){
	string str;
	cin>>str;//공백있으면 getline 
	
	int cnt=0;
	for(int i=0;i<str.size();i++){
			if(isNumber(str[i]) && isNumber(str[i+1])==false)//앞은숫자 뒤는 문자면cnt++; 
				cnt++;	
	}
	cout<<cnt<<endl;
	return 0;
}
		
		
