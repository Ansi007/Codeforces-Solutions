#include<iostream>
using namespace std;

int main(){
	string str;
	cin >> str;
	int ones=0,two=0,three=0, op=0;
	for( int i=0; i<str.length(); i++){
		if(str.at(i)=='1')	ones++;
		else if(str.at(i)=='2')	two++;
		else if(str.at(i)=='3')	three++;
	}
	two+=ones;
	three+=two;
	for( int i=0; i<str.length(); i++){
		if      (i<2*ones && str.at(i)!='+')	str.at(i)='1';
		else if (i<2*two && str.at(i)!='+')	str.at(i)='2';
		else if (i<2*three && str.at(i)!='+')	str.at(i)='3';
	}


	for( int i=0; i<str.length(); i++)
		cout << str.at(i);
	return 0;
}
