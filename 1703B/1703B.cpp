#include<iostream>
using namespace std;

int main(){
	int n, balloons, t;
	cin >> t;
	for( int run=0; run<t; run++){
		balloons=0;
		cin >> n;
		char ch[n];
		for( int i=0; i<n; i++)
			cin >> ch[i];
		for( int i=0; i<n; i++){
			if(i==0)	{ balloons+=2;}
			for( int j=i-1; j>=0; j--){
				if( ch[i]==ch[j])	{ balloons++; break;	}
				else if( ch[i]!=ch[j] && j==0) 	balloons+=2;
		}	}
		cout << balloons << endl;
	}
	
	return 0;
}
