#include<iostream>
using namespace std;

int main(){
	int t, number, count;
	cin >> t;
	for(int run=0; run<t; run++){
		cin >> number;
	count=0;
	for( int i=1; i<=number; i++){
	if(i<10) count++;
	else if(i>=10 && i<=100 && i%11==0)						count++;	
	else if(i>100 && i<=1000 && i%111==0)					count++;
	else if(i>1000 && i<=10000 && i%1111==0)				count++;
	else if(i>10000 && i<=100000 && i%11111==0)				count++;
	else if(i>100000 && i<=1000000 && i%111111==0)			count++;
	else if(i>1000000 && i<=10000000 && i%1111111==0)		count++;
	else if(i>10000000 && i<=100000000 && i%11111111==0)	count++;
	else if(i>100000000 && i<=1000000000 && i%111111111==0)	count++;
	else if(i>1000000000 && i<=1000000000 && i%111111111==0)count++;
	}
	cout << count << endl;
}
	return 0;
}
