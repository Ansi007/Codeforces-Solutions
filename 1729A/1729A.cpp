#include<iostream>
using namespace std;

int absolute( int num){
	if(num<0)	return num*=-1;
	else		return num;
}

int main(){
	int a,b,c,second=0;
	int t;
	cin >> t;
	for(int run=0; run<t; run++){
		cin >> a;
		cin >> b;
		cin >> c;
		second=(absolute(b-c)+c)-1;
		if(a-1<second )  	 		 	cout << "1" << endl;	
		else if(second<a-1)			 	cout << "2" << endl;
		else 							cout << "3" << endl;	
		
	}	
	return 0;
}
