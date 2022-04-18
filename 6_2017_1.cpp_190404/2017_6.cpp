#include <iostream>
#include <string>
using namespace std;
int findPatternFromString(string &str, string &subStr){
	int cnt=0;
	int limit=str.size()-subStr.size();
	
	for(int i=0;i<=limit;i++){
		if(str.substr(i, subStr.size())==subStr)
			cnt++;	
	}
	return cnt++;
}

int main(void){
	string s1, s2;
	cout<<"full: ";
	getline(cin, s1, '\n');
	
	cout<<"sub: ";
	getline(cin, s2, '\n');
	
	int n= findPatternFromString(s1, s2);
	cout<<"n= "<<n<<endl;
	return 0;
}
