#include <iostream>
#include <string>
using namespace std;

int main(void){
	string s1;
	cout<<"Enter: ";
	getline(cin, s1, '\n');
	int cnt1[26]={0, };//대문자 
	int cnt2[26]={0, };//소문자 
	
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
			cout<<"중복문자있음"<<endl;
			return 0;
		}
	}
	cout<<"중복문자 없음"<<endl;
	return 0;
}
