#include<iostream>
using namespace std;

int main(){
	string str1, str2;
	cin >> str1;
	cin >> str2;
	for ( int i=0; i<str1.length(); i++){
		if( str1.at(i)>='A' && str1.at(i)<='Z' )		str1.at(i)+=32;
		if( str2.at(i)>='A' && str2.at(i)<='Z' )		str2.at(i)+=32;
		if ( str1.at(i)==str2.at(i)	&& i==str1.length()-1 )	{
			cout << 0 << endl;
			break;
		}
		else if (str1.at(i)<str2.at(i))	{
			cout << -1 << endl;
			break;
		}
		else if (str1.at(i)>str2.at(i)) {
			cout << 1 << endl;
			break;
		}
		else continue;
	}			
	return 0;
}
