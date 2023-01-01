#include<iostream>
#include <cstring>
#include <string>
using namespace std;

int main (){
	int n;
	cin >> n;
	string str[n];
	string str1[n];
	for( int i=0; i<n; i++)
		cin >> str[i];
		
	for ( int i=0; i<n; i++){
		if( str[i].length() <=10 ) cout << str[i] << endl;
		else {
			str[i] = str[i].at(0) + to_string(str[i].length()-2) + str[i].at(str[i].length()-1);
			cout << str[i] << endl;
		}
	}
	return 0;
}

