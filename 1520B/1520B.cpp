#include<iostream>
using namespace std;

int main(){
	int t, number, count;
	cin >> t;
	for(int run=0; run<t; run++){
		cin >> number;
	count=0;
	if(number<10)	count= number/1;
	else if(number>=10 && number<=100) count= 9+number/11;
	else if(number>100 && number<=1000)	count= 18+number/111;
	else if(number>1000 && number<=10000) count= 27+number/1111;
	else if(number>10000 && number<=100000) count= 36+number/11111;
	else if(number>100000 && number<=1000000) count= 45+number/111111;
	else if(number>1000000 && number<=10000000) count= 54+number/1111111;
	else if(number>10000000 && number<=100000000) count= 63+number/11111111;
	else if(number>100000000 && number<=1000000000)count= 72+number/111111111;
	else if(number>1000000000 && number<=1000000000)count= 81+number/1111111111;
	cout << count << endl;
}
	return 0;
}
