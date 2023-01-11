#include<iostream>
#include<sstream>
using namespace std;

bool check_ordinary( int number){
	if(number<10) return true;
	else {
		stringstream ss;  
  		ss<<number;  
  		string str;  
  		ss>>str;
		for( int i=1; i<str.length(); i++){
			if(str.at(i-1)!=str.at(i))	{	return false; break;}	}	
	}
	return true;
}

int main(){
	int t, number,count;
	cin >> t;
	for(int run=0; run<t; run++){
		count=0;
		cin >> number;
	for( int i=1; i<=number; i++)
		if(check_ordinary(i))	count++;
	cout << count << endl;
	}
	return 0;
}
