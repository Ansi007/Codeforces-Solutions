#include<iostream>
using namespace std;

int NextPrime( int num ){
	next:
	num=num+1;
	int count=0;
	for( int i=2; i<=num/2; i++)
		if(num%i==0) count++;
	if (count==0) return num;
	else goto next;
}

int main(){
	int num1, num2, num3;
	cin >> num1;
	cin >> num2;
	num3 = NextPrime(num1);
	if( num3==num2 ) cout << "YES" << endl;
	else			 cout << "NO" << endl;
	return 0;
}
