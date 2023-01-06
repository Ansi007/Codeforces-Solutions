#include<iostream>
using namespace std;

int main(){
	string str;
	cin >> str;
	if(str.at(0)>='a' && str.at(0)<='z' ) str.at(0)-=32;
	cout << str << endl;
	return 0;
}
