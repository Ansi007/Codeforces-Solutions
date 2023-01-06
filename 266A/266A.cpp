#include<iostream>
using namespace std;

int main (){
	int n, stone=0;
	cin >> n;
	char ch[n];
	for( int i=0; i<n; i++)
		cin >> ch[i];
	for( int i=1; i<n; i++)
		if(ch[i]==ch[i-1])	stone++;
	cout << stone << endl;
	return 0;
}
