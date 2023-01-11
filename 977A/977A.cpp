#include<iostream>
using namespace std;

int main(){
	int number, n;
	cin >> number >> n;
	for( int i=0; i<n; i++){
		if(number%10==0)	number/=10;
		else				number--;
	}
	cout << number << endl;
	return 0;
}
