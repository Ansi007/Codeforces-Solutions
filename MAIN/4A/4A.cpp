#include<iostream>
using namespace std;
 
int main (){
	int num=0;
	cin >> num;
	if((int(num/2)-1!=0) && num%2==0)	cout << "YES\n";
	else								cout << "NO\n";
}
