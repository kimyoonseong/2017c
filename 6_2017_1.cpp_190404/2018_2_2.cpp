#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(void){
	ifstream in("test3.txt");
	string str;
	getline(in, str,'\n');
	
	int left=0, right=str.size()-1;
	bool isPelindrome=true;
	while(left<right){
		if(str[left]==str[right])
			left++, right--;
		else{
			isPelindrome=false;
			break;	
		}
	}
	if(isPelindrome)
		cout<<"�´�"<<endl;
	else
		cout<<"�ƴϴ�"<<endl;
	return 0;
}
