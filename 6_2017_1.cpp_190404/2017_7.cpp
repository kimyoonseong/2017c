#include <iostream>
#include <string>
using namespace std;

int main(void){
	string s1;
	cout<<"Enter: ";
	getline(cin, s1, '\n');
	int cnt1[26]={0, };//�빮�� 
	int cnt2[26]={0, };//�ҹ��� 
	
	for(int i=0;i<s1.size();i++){
		if(s1[i]>='A' && s1[i]<='Z'){
			int x=s1[i]-'A';
			cnt1[x]++;	
		}
		else if(s1[i]>='a' && s1[i]<='z'){
			int x=s1[i]-'a';
			cnt2[x]++;	
		}
	}
	
	for(int i=0;i<26;i++){
		if(cnt1[i]>1||cnt2[i]>1){
			cout<<"�ߺ���������"<<endl;
			return 0;
		}
	}
	cout<<"�ߺ����� ����"<<endl;
	return 0;
}
