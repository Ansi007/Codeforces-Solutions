#include<iostream>
using namespace std;

int main (){
	int lower=0, upper=0;
	string str;
	cin >> str;
	for( int i=0; i<str.length(); i++){
		if(str.at(i)>='a' && str.at(i)<='z')	lower++;
		else									upper++;
	}
	if( lower>=upper){
		for( int i=0; i<str.length(); i++)
			if(str.at(i)>='A' && str.at(i)<='Z')	str.at(i)+=32;
	}
	else {
		for( int i=0; i<str.length(); i++)
			if(str.at(i)>='a' && str.at(i)<='z')	str.at(i)-=32;
	}
	cout << str << endl;
	return 0;
}
