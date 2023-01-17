#include<iostream>
using namespace std;

int absolute( int num ){
	if( num<0) return num*=-1;
	else	   return num;
}

int main(){
	int steps=0, count=0;
	string str;
	cin >> str;
	char c1='a';
	for( int i=0; i<str.length(); i++){
		int clockwise=0, counter=0, counter1=0;
			clockwise=absolute((c1-96)-(str.at(i)-96));
			counter=(26-(str.at(i)-96))+(c1-96);
			counter1=(26-(c1-96))+(str.at(i)-96);
			if(counter>=clockwise && counter1>=clockwise)		count+=clockwise;
			else if(counter>=counter1 && clockwise>=counter1) 	count+=counter1;
			else if(clockwise>=counter && counter1>=counter)	count+=counter;
			c1=str.at(i);
	}
	cout << count << endl;
	return 0;
}
