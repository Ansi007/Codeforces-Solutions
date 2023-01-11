#include<iostream>
#include<cstring>
using namespace std;

int main(){
	double number; 
	int count=0;
	cin >> number;
	string str1;
	str1 = to_string(number);
	for( int i=0; i<str1.length(); i++)
		if(str1.at(i)=='4'||str1.at(i)=='7')	count++;
	if(count==4||count==7)	cout << "YES\n";
	else					cout << "NO\n";
	return 0;
}
